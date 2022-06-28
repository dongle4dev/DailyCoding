struct ListNode {
    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return head;
        
        ListNode *prev = nullptr;
        ListNode *next = nullptr;
        
        while (head) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        
        return prev;
    }
    // ListNode* helper(ListNode* head, ListNode* prev) {
    //     if (!head) return prev;
    //     ListNode* next = head->next;
    //     head->next = prev;
    //     return helper(next,head);
    // }
    // ListNode* reverseList(ListNode* head) {
    //     return helper(head, nullptr);
    // }
};