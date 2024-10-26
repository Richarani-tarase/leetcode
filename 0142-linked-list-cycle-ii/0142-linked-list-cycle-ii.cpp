/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
            return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *ans=head;
        while(fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            {
                while(ans!=slow)
                {
                    ans=ans->next;
                    slow=slow->next;
                }
                return ans;
            }
        }
        return NULL;
    }
};