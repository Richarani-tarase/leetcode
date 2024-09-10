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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* head1=head;
        while(head1->next!=NULL)
        {
            int a=head1->val;
            int b=head1->next->val;
            int c=gcd(a,b);
            ListNode* temp=new ListNode(c);
            temp->next=head1->next;
            head1->next=temp;
            head1=head1->next->next;
        }
        return head;
    }
};