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
    // void inorder(TreeNode*root,vector<int>& v)
    // {
    //     if(root==NULL)
    //     {
    //         //v.push_back(-1);
    //         return ;
    //     }
    //     inorder(root->left,v);
    //     v.push_back(root->val);
    //     inorder(root->right,v);
    // }
    TreeNode* insert(TreeNode*r,int n)
    {
        if(r==NULL)
        {
            return (new TreeNode(n));
        }
        r->right=insert(r->right,n);
        return r;
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode*r=NULL,temp=NULL;
        stack<TreeNode *>s;
        TreeNode* t=root;
        while(t!=NULL)
        {
            s.push(t);
            t=t->left;
        }
        while(!s.empty())
        {
            t=s.top();
            s.pop();
            r=insert(r,t->val);
            if(t->right!=NULL)
            {
                t=t->right;
                while(t!=NULL)
                {
                    s.push(t);
                    t=t->left;
                }
            }
        }
        // for(int i=0;i<v.size();i++)
        // {
        //     r=insert(r,v[i]);
        // }
        return r;
    }
};