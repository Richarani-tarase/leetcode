class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size()-3;i++)
        {
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int>v(3);
                    v[0]=nums[i];
                    v[1]=nums[j];
                    v[2]=nums[k];
                    s.insert(v);
                    j++;
                    k--;
                }
                else if(nums[i]+nums[k]+nums[j]<0)
                {
                    j++;
                }
                else if(nums[i]+nums[k]+nums[j]>0)
                {
                    k--;
                }
            }
        }
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};