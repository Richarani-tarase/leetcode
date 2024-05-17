/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned==NULL)
        {
            return NULL;
        }
        if(cloned->val==target->val)
        {
            return cloned;
        }
        queue<TreeNode*>q;
        q.push(cloned);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            if(temp->val==target->val)
            {
                return temp;
            }
            else
            {
                if(temp->left!=NULL)
                q.push(temp->left);
                if(temp->right!=NULL)
                q.push(temp->right);
            }
            q.pop();
        }
        
        return NULL;
    }
};