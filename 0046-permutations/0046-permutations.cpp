class Solution {
public:
    void per(vector<int>nums,vector<int>temp,vector<int>v,vector<vector<int>>&ans)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
                temp.push_back(nums[i]);
                per(nums,temp,v,ans);
                v[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp,vis(nums.size(),0);
        per(nums,temp,vis,ans);
        return ans;
    }
};