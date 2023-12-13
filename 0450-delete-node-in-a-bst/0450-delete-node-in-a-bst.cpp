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
    int minval(TreeNode*root)
    {
        TreeNode*r=root;
        while(r->left!=NULL)
        {
            r=r->left;
        }
        return r->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if(root==NULL)
        {
            return root;
        }
        if(root->val==key)
        {
            if(root->right==NULL&&root->left==NULL)
            {
                return NULL;
            }
            else if(root->left==NULL && root->right!=NULL)
            {
                return root->right;
            }
            else if(root->left!=NULL && root->right==NULL)
            {
                return root->left;
            }
            else if(root->left!=NULL && root->right!=NULL)
            {
                int min=minval(root->right);
                root->val=min;
                root->right=deleteNode(root->right,min);
            }
        }
            else if(root->val>key)
            {
                root->left=deleteNode(root->left,key);
            }
            else if(root->val<key)
            {
                root->right=deleteNode(root->right,key);
            }
        return root;
    }
};