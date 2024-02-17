class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n-2,vector<int>(n-2));
        for(int i=0;i<grid.size()-2;i++)
        {
            for(int j=0;j<grid.size()-2;j++)
            {
                int max=INT_MIN;
                for(int k=i;k<3+i;k++)
                {
                    for(int l=j;l<3+j;l++)
                    {
                        if(max<grid[k][l])
                        {
                            max=grid[k][l];
                        }
                    }
                }
                ans[i][j]=max;
            }
        }
        return ans;
    }
};