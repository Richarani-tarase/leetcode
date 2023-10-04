class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(),sum=0;
        int m=mat[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j)
                sum=sum+mat[i][j];
                if(i+j==n-1&&i!=j)
                sum=sum+mat[i][j];
            }
        }
        return sum;
    }
};