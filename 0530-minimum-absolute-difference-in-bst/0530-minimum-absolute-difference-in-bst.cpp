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
    void inorder(TreeNode* root,vector<int>&arr)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> arr;
        int min=INT_MAX;
        inorder(root,arr);
        for(int i=0;i<arr.size()-1;i++)
        {
            int a=arr[i+1]-arr[i];
            if(min>a)
            {
                min=a;
            }
        }
        return min;
    }
};