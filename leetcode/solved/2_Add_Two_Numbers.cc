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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int32_t carry = 0;
		ListNode head;
		ListNode *cur = &head;

		while(l1 && l2) {
			int32_t n = l1->val + l2->val + carry;

			carry = n / 10;
			n = n % 10;

			cur->next = new ListNode(n);
			cur = cur->next;

			l1 = l1->next;
			l2 = l2->next;
		}

		// ensure 'l1' is longer list
		if(l1 == nullptr) {
			swap(l1, l2);
		}

		while(l1) {
			int32_t n = l1->val + carry;

			carry = n / 10;
			n = n % 10;

			cur->next = new ListNode(n);
			cur = cur->next;

			l1 = l1->next;
		}

		if(carry) {
			cur->next = new ListNode(carry);
			cur = cur->next;
		}

		return head.next;
	}
};
