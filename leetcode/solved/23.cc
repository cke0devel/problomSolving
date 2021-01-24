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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int,int> cnt;
        
        for(auto &head : lists) {
            for(ListNode *node = head; node!=nullptr; node=node->next) {
                cnt[node->val] += 1;
            }
        }

        ListNode head;
        ListNode *cur = &head;
        for(const auto &e : cnt) {
            for(int i=0; i<e.second; i++) {
                cur->next = new ListNode(e.first);
                cur = cur->next;
            }
        }
        
        return head.next;
    }
};
