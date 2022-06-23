// Distance traveled by slow when they meet: L1+L2
// Distance traveled by fast when they meet: L1+L2+x+L2,
//where x is the remaining length of the cycle (meeting point to start of the cycle).
// 2(L1+L2) = L1+L2+x+L2
// 2L1 + 2L2 = L1+2L2+x
// => x = L1
// so we need to move L1 steps from the current meeting point to reach the entry point of the cycle.

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {
                fast = head;
                while (fast != slow) {
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};

