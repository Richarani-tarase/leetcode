/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans=INT_MIN,ans2=0;
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            c++;
            int n=q.size();
            int s=0;
            for(int i=0;i<n;i++)
            {
                TreeNode*temp=q.front();
                s+=temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                q.pop();
            }
            if(ans<s)
            {
                ans=max(ans,s);
                ans2=c;
            }
        }
        return ans2;
    }
};