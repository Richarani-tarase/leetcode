class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0,i,j;
        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                if(grid[i][j]<0)
                {
                    c++;
                }
                if(grid[i][j]>0)
                {
                    break;
                }
            }
        }
        return c;
    }
};