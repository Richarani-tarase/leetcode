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
        ListNode* l3=NULL,* r=NULL;
        int carry=0;
        ListNode* temp;
        while(l2!=NULL && l1!=NULL)
        {
            temp=new ListNode();
            temp->val=l1->val+l2->val+carry;
            temp->next=NULL;
            if(temp->val>9)
            {
                temp->val=temp->val%10;
                carry=1;
            }
            else
                carry=0;
            if(l3==NULL)
            {
                l3=temp;
                r=l3;
            }
            else
            {
                r->next=temp;
                r=temp;
            }
            l2=l2->next;
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            while(l2!=NULL)
            {
            temp=new ListNode();
            temp->val=l2->val+carry;
            temp->next=NULL;
            if(temp->val>9)
            {
                temp->val=temp->val%10;
                carry=1;
            }
            else
                carry=0;
            r->next=temp;
                r=temp;    
            l2=l2->next;
            }
        }
        if(l1!=NULL)
        {
            while(l1!=NULL)
            {
                temp=new ListNode();
                temp->val=carry+l1->val;
                temp->next=NULL;
                if(temp->val>9)
                {
                    temp->val=temp->val%10;
                    carry=1;
                }
                else
                {
                    carry=0;
                }    
                r->next=temp;
                r=temp;
                l1=l1->next;
            }
        }
    if(carry)
    {
        temp=new ListNode ();
        temp->val=carry;
        temp->next=NULL;
        r->next=temp;
        r=temp;
    }
        return l3;
    }
};