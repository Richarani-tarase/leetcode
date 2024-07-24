class Solution {
public:
    vector<int> sortJumbled(vector<int>& m, vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            int ans=0;
            int b=1;
            while(a>0)
            {
                int rem=a%10;
                ans+=m[rem]*b;
                a=a/10;
                b=b*10;
            }
            if (nums[i] == 0) {
            ans = m[0];
            }
            v.push_back({ans,i});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[v[i].second]);
        }
        return ans;
    }
};