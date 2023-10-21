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
        ListNode* p=headB;
        while(headA!=0)
        {
            p=headB;
            while(p!=0)
            {
                if(headA==p)
                {
                    return headA;
                }
                p=p->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};