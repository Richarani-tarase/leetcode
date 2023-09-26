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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* q=head;
        while(q!=NULL && q->next!=NULL)
        {
            if(q->next->val==q->val)
            {
                q->next=q->next->next;
            }
            else
            q=q->next;
        }
        return head;
    }
};