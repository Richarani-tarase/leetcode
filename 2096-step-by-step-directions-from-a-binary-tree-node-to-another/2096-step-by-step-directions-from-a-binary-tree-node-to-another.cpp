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
TreeNode* lowestCommonAncestor(TreeNode* root, int p, int q) {
        if(root==NULL || root->val==p || root->val==q){
            return root;
        }
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        if(left==NULL)
            return right;
        else if(right==NULL)
            return left;
        else 
            return root;
    }

   bool path(TreeNode*root,int s,string &p)
    {
        if(!root)
            return false;
        if(root->val==s)
            return true;
        p.push_back('L');
        if(path(root->left,s,p))
            return true;
        p.pop_back();
        p.push_back('R');
        if(path(root->right,s,p))
            return true;
        p.pop_back();
        return false;
    }
    string getDirections(TreeNode* root, int s, int d) {
       TreeNode*l=lowestCommonAncestor(root,s,d);
        string ls="",ld="";
        path(l,s,ls);   
        path(l,d,ld); 
        for(auto &i:ls)
            i='U';
        return ls+ld;
    }
};