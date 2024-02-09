class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int row=0;
        vector<vector<int>>ans(n,vector<int>(n));
            for(int i=n-1;i>=0;i--)
            {
                for(int j=0;j<n;j++)
                {
                    ans[j][row]=matrix[i][j];
                }
                row++;
            }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=ans[i][j];
            }
        }
    }
};