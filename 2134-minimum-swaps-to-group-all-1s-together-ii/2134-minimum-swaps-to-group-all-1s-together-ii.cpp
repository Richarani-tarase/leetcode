class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int one=0,n=nums.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                one++;
            }
        }
        for(int i=0;i<one;i++)
        {
            if(nums[i]==0)
             c++;
        }
        int ans=c;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==0)
            {
                c--;
            }
            if(nums[(i+one-1)%n]==0)
            {
                c++;
            }
            else{}
            ans=min(ans,c);
        }
        return ans;
    }
};