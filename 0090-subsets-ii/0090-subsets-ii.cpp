class Solution {
public:
    void subset(vector<int> nums,int i,vector<int>& v,vector<vector<int>>& ans)
    {
        if(i>=nums.size())
        {
            if(find(ans.begin(),ans.end(),v)==ans.end())
                ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        subset(nums,i+1,v,ans);
        v.pop_back();
        subset(nums,i+1,v,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        subset(nums,0,v,ans);
        return ans;
    }
};