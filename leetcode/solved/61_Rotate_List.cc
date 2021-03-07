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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return nullptr;
        
        int sz = 1;
        ListNode *last = head;
        for(; last->next; last=last->next) {
            sz += 1;
        }
        
        k = sz - (k % sz);

        ListNode *node = head;
        for(int i=1; i<k; i++) {
            node = node->next;
        }

        last->next = head;
        head = node->next;
        node->next = nullptr;
        
        return head;
    }
};
