class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int k=0;
        while(nums.size()!=0)
        {
            vector<int> a;
            k=0;
            for(int i=0;i<nums.size();i++)
            {
                if(a.size()==0||a[a.size()-1]<nums[i])
                {
                    a.push_back(nums[i]);
                    nums.erase(nums.begin()+i);
                    i--;
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};