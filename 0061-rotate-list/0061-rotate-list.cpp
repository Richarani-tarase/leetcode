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
            ListNode* z=head;
        int count=0,a=0;
            while(z!=NULL)
            {
                count++;
                z=z->next;
            }
            a=k%count;
        if(a==0)
            return head;
        while(a)
        {
            ListNode* q=head,*p;
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