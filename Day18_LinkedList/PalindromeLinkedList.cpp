/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head, *slow = head, *prev, *next;
        
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        prev = slow, slow = slow->next, prev->next = nullptr;
        
        while (slow) {
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        
        fast = head, slow = prev;
        
        while (slow) {
            if (slow->val != fast->val) return false;
            else slow = slow->next, fast = fast->next;
        }
        
        return true;
    }
//     ListNode* left = nullptr;
//     bool compare(ListNode* right){
//         if (!right) return true;
        
//         bool res = compare(right->next);
//         if (!res) return res;
//         if (right->val != left->val) return false;
//         left = left->next;
//         return true;
//     }
//     bool isPalindrome(ListNode* head) {
//         if (!head || !head->next) return true;
        
//         left = head;
        
//         return compare(head);        
//     }
};
