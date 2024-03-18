class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        vector<int>ans;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                v.push_back(grid[i][j]);
            }
        }
        int a=v.size();
        sort(v.begin(),v.end());
        int sum=v[0];
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==v[i-1])
            {
                ans.push_back(v[i]);
                v.erase(v.begin()+i);
                i--;
            }
            else
                sum+=v[i];
        }
        int n=((a*(a+1))/2)-sum;
        ans.push_back(n);
        return ans;
    }
};