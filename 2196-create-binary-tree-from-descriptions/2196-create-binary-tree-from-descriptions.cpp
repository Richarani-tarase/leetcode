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
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        map<pair<int,int>,int>m;
        vector<int>c;
        set<int>p;
        for(int i=0;i<d.size();i++)
        {
            m[{d[i][0],d[i][2]}]=d[i][1];
            p.insert(d[i][0]);
            c.push_back(d[i][1]);
        }
        for(auto it:c)
        {
            p.erase(it);
        }
        int b=*p.begin();
        TreeNode* root=new TreeNode(b);
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            if(m.find({node->val,1})!=m.end())
            {
                int a=m[{node->val,1}];
                TreeNode* temp=new TreeNode(a);
                node->left=temp;
                q.push(temp);
            }
            if(m.find({node->val,0})!=m.end())
            {
                int a=m[{node->val,0}];
                TreeNode* temp=new TreeNode(a);
                node->right=temp;
                q.push(temp);
            }
            q.pop();
        }
        return root;
    }
};