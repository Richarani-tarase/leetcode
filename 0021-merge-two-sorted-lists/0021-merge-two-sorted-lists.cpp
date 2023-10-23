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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=NULL;
        ListNode* temp=NULL,* q=head;
        if(list1==NULL && list2!=NULL)
        {
            return list2;
        }
        if(list1!=NULL && list2==NULL)
        {
            return list1;
        }
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val>list2->val)
            {
                temp=list2;
                list2=list2->next;
                temp->next=NULL;
                if(head==NULL)
                {
                    head=temp;
                    q=head;
                }
                else
                {
                    q->next=temp;
                    q=temp;
                }
            }
            else 
            {
                temp=list1;
                 list1=list1->next;
                temp->next=NULL;
                if(head==NULL)
                {
                    head=temp;
                    q=head;
                }
                else
                {
                    q->next=temp;
                    q=temp;
                }
            }  
            if(list1==NULL && list2!=NULL)
            {
                q->next=list2;
            }
            if(list1!=NULL && list2==NULL)
            {
                q->next=list1;
            }
        }
        return head;
    }
};