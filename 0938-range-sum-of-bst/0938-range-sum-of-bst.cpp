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
    void sum(TreeNode* root, int low, int high, int &ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val>=low&&root->val<=high)
        {
            ans=ans+root->val;
        }
        sum(root->left,low,high,ans);
        sum(root->right,low,high,ans);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        
        if(root->val>high&&root->val!=high)
            sum(root->left,low,high,ans);
        else if(root->val<low&&root->val!=low)
            sum(root->right,low,high,ans);
        else
            sum(root,low,high,ans);
        return ans;
    }
};