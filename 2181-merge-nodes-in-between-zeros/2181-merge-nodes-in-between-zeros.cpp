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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*start=head->next;
        ListNode* ans=new ListNode();
        int sum=0;
        ans->val=sum;
        ans->next=NULL;
        ListNode* t=ans;
        while(start!=NULL)
        {
            sum+=start->val;
            if(start->val==0)
            {
                ListNode* temp=new ListNode();
                temp->val=sum;
                temp->next=NULL;
                sum=0;
                t->next=temp;
                t=t->next;
                
            }
            start=start->next;
        }
        return ans->next;
    }
};