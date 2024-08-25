class Solution {
public:
    void subset(vector<vector<int>>& ans,vector<int>&arr,int k,int n,int i,int& sum)
    {
        if(arr.size()==k&&sum==n)
        {
            ans.push_back(arr);
            return;
        }
        if(sum>n||i>9)
        {
            return;
        }
        arr.push_back(i);
        sum+=i;
        subset(ans,arr,k,n,i+1,sum);
        sum-=i;
        arr.pop_back();
        subset(ans,arr,k,n,i+1,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>arr;
        int sum=0;
        int i=1;
        subset(ans,arr,k,n,i,sum);
        return ans;
    }
};