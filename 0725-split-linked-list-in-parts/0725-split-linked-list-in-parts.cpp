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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       ListNode*temp=head;
       int count=0;
       while(temp!=NULL){
        count++;
        temp=temp->next;
       } 
       int size=count/k;
       int extra=count%k;
       vector<ListNode*>ans(k,NULL);
       temp=head;
       for(int i=0;i<k;i++){
        ans[i]=temp;
        int tempsize=size+(extra>0?1:0);
        extra--;
        for(int j=1;j<tempsize;j++){
            (temp!=NULL?temp=temp->next:NULL);
        }

        if(temp!=NULL){
            ListNode* next=temp->next;
            temp->next=NULL;
            temp=next;
        }
       }
       return ans;
    }
};