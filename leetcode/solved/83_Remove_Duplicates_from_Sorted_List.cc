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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) {
            return nullptr;
        }
        
        for(ListNode *node=head; node; node=node->next) {
            ListNode *next = node->next;
            while(next!=nullptr && next->val == node->val) {
                next = next->next;
            }
            node->next = next;
        }
        
        return head;
    }
};
