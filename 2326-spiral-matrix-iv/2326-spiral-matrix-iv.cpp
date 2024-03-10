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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int row=m-1,col=n-1,srow=0,scol=0;
        ListNode* head2=head;
        while(head2!=NULL)
        {
            for(int i=scol;i<=col&&head2!=NULL;i++)
            {
                ans[srow][i]=head2->val;
                head2=head2->next;
            }
            srow++;
            for(int i=srow;i<=row&&head2!=NULL;i++)
            {
                ans[i][col]=head2->val;
                head2=head2->next;
            }
            col--;
            for(int i=col;i>=scol&&head2!=NULL;i--)
            {
                ans[row][i]=head2->val;
                head2=head2->next;
            }
            row--;
            for(int i=row;i>=srow&&head2!=NULL;i--)
            {
                ans[i][scol]=head2->val;
                head2=head2->next;
            }
            scol++;
        }
        return ans;
    }
};