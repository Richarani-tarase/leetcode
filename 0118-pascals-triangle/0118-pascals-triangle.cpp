class Solution {
public:
    vector<vector<int>> generate(int r) {
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i=0;i<r-1;i++)
        {
            vector<int>v;
            v.push_back(1);
            for(int j=1;j<i+1;j++)
            {
                v.push_back(ans[i][j-1]+ans[i][j]);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans;
    }
};