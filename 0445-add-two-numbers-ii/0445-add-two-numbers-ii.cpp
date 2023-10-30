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
    ListNode* reverse(ListNode* l1)
    {
        ListNode* p,*q=NULL;
        while(l1!=NULL)
        {
            p=l1;
            l1=l1->next;
            p->next=q;
            q=p;
        }
        return q;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=reverse(l1);
        ListNode* head2=reverse(l2),*temp,*p=NULL;
        int carry=0,a=0;
        while(head!=NULL && head2!=NULL)
        {
            temp=new ListNode();
            a=carry+head->val+head2->val;
            temp->val=a%10;
            temp->next=p;
            p=temp;
            head=head->next;
            head2=head2->next;
            carry=a/10;
        }
        if(head!=NULL || head2!=NULL)
        {
            while(head!=NULL)
            {
                temp=new ListNode();
                int a=carry+head->val;
                carry=a/10;
                temp->val=a%10;
                temp->next=p;
                p=temp;
                head=head->next;  
            }
            while(head2!=NULL)
            {
                temp=new ListNode();
                int a=carry+head2->val;
                carry=a/10;
                temp->val=a%10;
                temp->next=p;
                p=temp;
                head2=head2->next;  
            }
        }
        if(head==NULL&&head2==NULL&&carry)
        {
            temp=new ListNode();
            temp->val=carry;
            temp->next=p;
            p=temp;
        }
         return p;
    }
};