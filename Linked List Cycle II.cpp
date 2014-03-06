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
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL) return NULL;
        ListNode* p = head;
        while(p->next != NULL)
        {
            if(p->val == 0xff)
                return p;
            p->val = 0xff;
            p = p->next;
        }
        return NULL;
    }
};