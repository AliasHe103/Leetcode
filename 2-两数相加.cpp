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
        int carry = 0;
        ListNode* head = NULL, * tmp = NULL;
        while (l1 || l2) {
            int v1 = l1 ? l1->val : 0;
            int v2 = l2 ? l2->val : 0;
            int sum = (v1 + v2 + carry) % 10;
            carry = (v1 + v2 + carry) / 10;
            if (!head)   head = tmp = new ListNode(sum);
            else tmp->next = new ListNode(sum), tmp = tmp->next;
            if (l1)  l1 = l1->next;
            if (l2)  l2 = l2->next;
        }
        if (carry > 0)   tmp->next = new ListNode(carry);
        return head;
    }
};