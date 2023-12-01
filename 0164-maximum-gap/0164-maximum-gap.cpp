class Solution {
public:
    int maximumGap(vector<int>& nums) {
    int a;
    int max=0;
    int n=nums.size();
    if(n<2)
    {
        return 0;
    }
    else
    {
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            a=nums[i+1]-nums[i];
            if(a>max)
            {
                max=a;
            }
        }
    }
    return max;
    }
};