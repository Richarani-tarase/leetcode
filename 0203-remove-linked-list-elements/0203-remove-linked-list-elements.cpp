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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*temp,*q;
        if(head==NULL)
        {
            return head;
        }
        while(head!=NULL && head->val==val)
        {
            head=head->next;
        }
        ListNode* head2=head;
        while(head2!=NULL)
        {

            if(head2->val==val)
            {
                q->next=head2->next;
                head2=head2->next;
            }
            else
            {
                q=head2;
                head2=head2->next;
            }
        }
        return head;
    }
};