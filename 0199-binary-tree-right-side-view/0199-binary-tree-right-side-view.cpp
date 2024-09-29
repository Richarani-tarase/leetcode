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
    void find(TreeNode* root,vector<int>&ans,int l)
    {
        if(root==NULL)
            return;
        if(l>ans.size())
        {
            ans.push_back(root->val);
        }
        find(root->right,ans,l+1);
        find(root->left,ans,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        find(root,ans,1);
        return ans;
    }
};