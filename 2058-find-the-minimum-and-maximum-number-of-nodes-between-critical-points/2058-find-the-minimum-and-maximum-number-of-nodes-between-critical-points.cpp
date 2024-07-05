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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>v;
        if(head->next->next==NULL)
            return {-1,-1};
        int c=2;
        ListNode* h=head;
        ListNode* h1=head->next;
        ListNode* h2=head->next->next;
        while(h2!=NULL)
        {
            if(h1->val<h2->val&&h1->val<h->val||h1->val>h2->val&&h1->val>h->val)
                v.push_back(++c);
            else
                c++;
            h=h->next;
            h1=h1->next;
            h2=h2->next;
        }
        if(v.size()<=1)
            return {-1,-1};
        sort(v.begin(),v.end());
        int m=INT_MAX;
        for(int i=0;i<v.size()-1;i++)
        {
                m=min(m,v[i+1]-v[i]);
        }
        return {m,v[v.size()-1]-v[0]};
    }
};