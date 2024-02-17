class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            sort(grid[i].begin(),grid[i].end());
        }
        for(int i=0;i<grid[0].size();i++)
        {
            int max=0;
            for(int j=0;j<grid.size();j++)
            {
                if(max<grid[j][i])
                {
                    max=grid[j][i];
                }
            }
            ans+=max;
        }
        return ans;
    }
};