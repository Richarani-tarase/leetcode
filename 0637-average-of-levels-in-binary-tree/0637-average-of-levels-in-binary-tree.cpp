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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            double sum=0;
            vector<TreeNode*> v;
            while(!q.empty())
            {
                v.push_back(q.front());
                q.pop();
            }
            for(int i=0;i<v.size();i++)
            {
               sum+=v[i]->val;
                if(v[i]->left!=NULL)
                {
                    q.push(v[i]->left);
                }
                if(v[i]->right!=NULL)
                {
                    q.push(v[i]->right);
                }
            }
            sum/=v.size();
            ans.push_back(sum);
        }
        return ans;
    }
};