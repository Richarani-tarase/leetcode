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
    void del(TreeNode* root, vector<int> d ,TreeNode* par, vector<TreeNode*>& ans)
    {
        if(root==NULL)
        {
            return;
        }
        del(root->left,d,root,ans);
        del(root->right,d,root,ans);
        if(find(d.begin(),d.end(),root->val)!=d.end())
        {
             if(root->left!=NULL)
                 ans.push_back(root->left);
             if(root->right!=NULL)
                 ans.push_back(root->right);
             if(par==NULL)
                 return;
             else if(par->left==root)
                 par->left=NULL;
             else
                 par->right=NULL;
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& d) {
        vector<TreeNode*>ans;
        if(find(d.begin(),d.end(),root->val)==d.end())
            ans.push_back(root);
        del(root,d,NULL,ans);
        return ans;
    }
};