/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node==nullptr) return;
        
        for(;node->next->next!=nullptr; node=node->next) {
            node->val = node->next->val;
        }
        node->val = node->next->val;
        node->next = nullptr;
    }
};
