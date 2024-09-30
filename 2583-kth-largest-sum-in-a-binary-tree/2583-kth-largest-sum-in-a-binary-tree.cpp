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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root==NULL)return -1;
        vector<long long>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            long long s=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode*temp=q.front();
                q.pop();
                s+=temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            ans.push_back(s);
        }
        sort(ans.begin(),ans.end());
        if(k>ans.size())return -1;
        return ans[ans.size()-k];
    }
};