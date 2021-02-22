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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr) return nullptr;
        
        ListNode *even = head->next;
        ListNode *prev_odd = head;
        ListNode *prev_even = head->next;

        if(head->next) {
            int idx = 2;
            
            for(ListNode *node = head->next->next; node!=nullptr; node=node->next) {
                idx += 1;
                
                if(idx%2 == 1) {
                    prev_odd->next = node;
                    prev_odd = node;
                } else {
                    prev_even->next = node;
                    prev_even = node;
                }
            }
        }
        
        prev_odd->next = even;
        if(even != nullptr) {
            prev_even->next = nullptr;
        }
        
        return head;
    }
};
