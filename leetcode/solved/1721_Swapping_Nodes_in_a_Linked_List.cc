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
    ListNode* swapNodes(ListNode* head, int k) {
        int length = 0;
        for(ListNode *node=head; node; node=node->next) {
            length += 1;
        }
        
        ListNode *t1 = head;
        ListNode *t2 = head;
        
        for(int i=1; i<k; i++) {
            t1 = t1->next;
        }
        for(int i=0; i<length-k; i++) {
            t2 = t2->next;
        }
        
        swap(t1->val , t2->val);
        return head;
    }
};
