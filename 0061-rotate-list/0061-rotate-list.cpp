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
    ListNode* rotateRight(ListNode* head, int k) {
            if(head==NULL||head->next==NULL)
            {
                return head;
            }
            ListNode* q=head,*p;
            int a=0;
            while(q!=NULL)
            {
                a++;
                q=q->next;
            }
            a=k%a;
        if(a==0)
            return head;
        while(a>0)
        {
            q=head;
            while(q->next->next!=NULL)
            {
                q=q->next;
            }
            p=q->next;
            q->next=NULL;
            p->next=head;
            head=p;
            a--;
        }
        return head;
    }
};