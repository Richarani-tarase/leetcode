class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max1=0,max2=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    max1=(nums[i] - nums[j]) * (long)nums[k];
                    if(max1>max2)
                    {
                        max2=max1;
                    }
                }
            }
        }
        return max2;
    }
};