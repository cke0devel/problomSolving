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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        
        ListNode *prev = head;
        ListNode *cur = head->next;
        
        while(cur != nullptr) {
            ListNode *tmp = cur->next;
            
            cur->next = prev;
            prev = cur;
            cur = tmp;
        }

        head->next = nullptr;
        return prev;
    }
};
