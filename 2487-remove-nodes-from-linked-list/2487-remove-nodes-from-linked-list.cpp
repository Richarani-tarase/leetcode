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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> s;
        ListNode* h;
        ListNode* head2=head;
        while(head2!=NULL)
        {
            while(!s.empty() )
            {
                if(s.top()->val>=head2->val)
                {
                    break;
                }
                s.pop();
            }
            s.push(head2);
            head2=head2->next;
        }
        ListNode* h2=NULL;
        while(!s.empty())
        {
            h=s.top();
            s.pop();
            h->next=h2;
            h2=h;
        }
        return h2;
    }
};