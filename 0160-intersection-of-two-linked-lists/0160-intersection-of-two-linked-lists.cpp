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
        ListNode* q=headA,* p=headB;
        while(q!=0)
        {
            p=headB;
            while(p!=0)
            {
                if(q==p)
                {
                    return q;
                }
                p=p->next;
            }
            q=q->next;
        }
        return NULL;
    }
};