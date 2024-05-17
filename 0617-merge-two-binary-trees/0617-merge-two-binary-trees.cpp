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
    void result(TreeNode* &root1, TreeNode* root2)
    {
        if(root1==nullptr && root2==nullptr)
        {
            return;
        }
        if(root1==NULL&&root2!=NULL)
        {
            root1=root2;
            return;
        }
        if(root1!=NULL&&root2==NULL)
        {
            return;
        }
        if(root1!=NULL&&root2!=NULL)
        {
            root1->val=root1->val+root2->val;
        }
        result(root1->left,root2->left);
        result(root1->right,root2->right);
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        result(root1,root2);
        return root1;
    }
};