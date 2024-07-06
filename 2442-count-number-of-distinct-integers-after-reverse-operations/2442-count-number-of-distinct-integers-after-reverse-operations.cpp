class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int a,b;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            a=nums[i];
            b=0;
            while(a!=0)
            {
                int r=a%10;
                a=a/10;
                b=b*10+r;
            }
           m[b]++;
           m[nums[i]]++;
        }
        return m.size();
    }
};