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
    void find(TreeNode* root, int targetSum,vector<vector<int>>& ans,int s,vector<int>v)
    {
        if(root==NULL)
        {
            return;
        }
        s+=root->val;
        v.push_back(root->val);
        if(root->right==NULL&&root->left==NULL)
        {
            if(s==targetSum)
            {
                ans.push_back(v);
            }
            return;
        }
        find(root->left,targetSum,ans,s,v);
        find(root->right,targetSum,ans,s,v);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;
        find(root,targetSum,ans,0,v);
        return ans;
    }
};