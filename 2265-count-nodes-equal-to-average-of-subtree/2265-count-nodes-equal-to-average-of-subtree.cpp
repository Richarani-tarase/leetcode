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
    int countnodes(TreeNode* root,int& count)
    {
        if(root==NULL)
        {
            return 0;
        }
        count++;
        return (root->val+countnodes(root->left,count)+countnodes(root->right,count));
    }
    void sum(TreeNode* root,int& c)
    {
        if(root==NULL)
        {
            return;
        }
        int leftnodes=0,rightnodes=0;
        int leftsum=countnodes(root,leftnodes);
        int rightsum=countnodes(root,rightnodes);
        if((leftsum+rightsum)/(leftnodes+rightnodes)==root->val)
        {
            c++;
        }
        sum(root->left,c);
        sum(root->right,c);
    }
    int averageOfSubtree(TreeNode* root) {
        int c=0;
        sum (root,c);
        return c;
    }
};