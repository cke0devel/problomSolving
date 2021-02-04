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
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr) return nullptr;
        
        ListNode *oneStep = head;
        ListNode *twoStep = head;
        
        while(twoStep && twoStep->next) {
            oneStep = oneStep->next;
            twoStep = twoStep->next;
            
            if(twoStep) {
                twoStep = twoStep->next;
            }
        }
        
        return oneStep;
    }
};
