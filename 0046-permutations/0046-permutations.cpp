class Solution {
public:
    void per(vector<int>&nums,vector<int>temp,int j,vector<vector<int>>&ans)
    {
        if(j==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=j;i<nums.size();i++)
        {  
            swap(nums[i],nums[j]);
            per(nums,temp,j+1,ans);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp,vis(nums.size(),0);
        per(nums,temp,0,ans);
        return ans;
    }
};