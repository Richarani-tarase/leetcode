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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp=head;
        vector<int> arr;
        vector<int> arr1;
        int index=0;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<arr.size();i=i+2)
        {
            arr1.push_back(arr[i]);
        }
        for(int i=1;i<arr.size();i=i+2)
        {
            arr1.push_back(arr[i]);
        }
        temp=head;
        while(temp!=NULL)
        {
            temp->val=arr1[index];
            temp=temp->next;
            index++;
        }
        return head;
    }
};