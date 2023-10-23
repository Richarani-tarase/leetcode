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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* q=head,* temp;
        int c=0;
        if(head==NULL)
        {
            return head;
        }
        while(q!=NULL)
        {
            c++;
            q=q->next;
        }
        if(n>c)
        {
            return head;
        }
        int a=c-n;
        if(a==0)
        {
            return head->next;
        }
        q=head;
        while(a)
        {
            temp=q;
            q=q->next;
            a--;
        }
        temp->next=q->next;
        delete q;
        return head;
    }
};