class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
        long long max1=0,max2=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    max1=(nums[i] - nums[j]) * (long)nums[k];
                    max2=max(max1,max2);
                }
            }
        }
        return max2;
    }
};