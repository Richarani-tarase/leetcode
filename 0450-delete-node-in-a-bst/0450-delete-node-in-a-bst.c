/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minval(struct TreeNode*root)
    {
        struct TreeNode*r=root;
        while(r->left!=NULL)
        {
            r=r->left;
        }
        return r->val;
    }
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if(root==NULL)
    {
        return NULL;
    }
    if(root->val==key)
    {
        if(root->right==NULL&&root->left==NULL)
        {
            return NULL;
        }
        else if(root->right!=NULL&&root->left==NULL)
        {
            return root->right;
        }
        else if(root->right==NULL&&root->left!=NULL)
        {
            return root->left;
        }
        else if(root->right!=NULL&&root->left!=NULL)
        {
            int min=minval(root->right);
            root->val=min;
            root->right=deleteNode(root->right,min);
            return root;
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