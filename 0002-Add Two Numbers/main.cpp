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
        int b= 0;
        ListNode newHead(0);
        ListNode *a = &newHead;
        while(b || l1 || l2)
        {
            b += (l1? l1-> val : 0) + (l2? l2->val:0);
            a->next = new ListNode(b%10);
            a = a->next;
            b /= 10;
            if(l1) l1 = l1 -> next;
            if(l2) l2 = l2 -> next;
        }
        return newHead.next;
    }
};
