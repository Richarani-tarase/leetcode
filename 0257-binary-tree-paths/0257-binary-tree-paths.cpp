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
    void traverse(TreeNode* root,vector<string>& ans,string s)
    {
        if(root==NULL)
        {
            return;
        }
        s += to_string(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            ans.push_back(s);
            return;
        }
        s+="->";
        traverse(root->left,ans,s);
        traverse(root->right,ans,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        traverse(root,v,"");
        return v;
    }
};