class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            int j=i;
            while(j>0)
            {
                if(j%2==1)
                {
                    c++;
                }
                j=j/2;
            }
            if(c==k)
            {
                ans+=nums[i];
            }
        }
        return ans;
    }
};