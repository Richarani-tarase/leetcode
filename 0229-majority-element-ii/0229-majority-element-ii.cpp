class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        int a=nums.size()/3;
        vector<int>ans;
        for(auto i:m)
        {
            if(i.second>a)
                ans.push_back(i.first);
        }
        return ans;
    }
};