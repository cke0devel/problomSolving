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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA = 0;
        int lengthB = 0;
        
        for(ListNode *node=headA; node!=nullptr; node=node->next) lengthA += 1;
        for(ListNode *node=headB; node!=nullptr; node=node->next) lengthB += 1;
        
        if(lengthA > lengthB) {
            for(int i=lengthA-lengthB; i>0; i--) headA=headA->next;
        }
        if(lengthA < lengthB) {
            for(int i=lengthB-lengthA; i>0; i--) headB=headB->next;
        }
        
        for(ListNode *nodeA=headA, *nodeB=headB; nodeA!=nullptr; nodeA=nodeA->next,nodeB=nodeB->next)
        {
            if(nodeA == nodeB) {
                return nodeA;
            }
        }
        
        return nullptr;
    }
};
