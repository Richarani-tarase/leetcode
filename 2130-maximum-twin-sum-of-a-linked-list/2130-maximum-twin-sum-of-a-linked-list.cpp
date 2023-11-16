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
    int pairSum(ListNode* head) {
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* q=slow->next;
        slow->next=NULL;
        ListNode* p;
        ListNode* r=NULL;
        while(q!=NULL)
        {
            p=q;
            q=q->next;
            p->next=r;
            r=p;
        }
        int max=0;
        while(head!=NULL && r!=NULL)
        {
            int a=head->val+r->val;
            if(a>max)
                max=a;
            head=head->next;
            r=r->next;
        }
        return max;
    }
};