class Solution {
    void set(vector<int> nums,int index,vector<vector<int>>& arr, vector<int> out)
    {
        if(index>=nums.size())
        {
            arr.push_back(out);
            return;
        }
        out.push_back(nums[index]);
        set(nums,index+1,arr,out);
        out.pop_back();
        set(nums,index+1,arr,out);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> arr;
        vector<int> out;
        set(nums,0,arr,out);
        return arr;
    }
};