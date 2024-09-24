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
    void find_sum(TreeNode* root,int a,int& sum)
    {
        if(root==NULL)return;
        a=a*10+root->val;
        if(root->left==NULL&&root->right==NULL)
        {
            sum+=a;
            return;
        }
        find_sum(root->left,a,sum);
        find_sum(root->right,a,sum);
        return;
    }
    int sumNumbers(TreeNode* root) {
        int a=0,sum=0;
        find_sum(root,a,sum);
        return sum;
    }
};