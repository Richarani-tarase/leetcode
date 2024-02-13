class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        for(int i=0;i<v.size();i=i+2)
        {
            for(int k=0;k<matrix[0].size();k++)
            {
                matrix[v[i]][k]=0;
            }
            for(int k=0;k<matrix.size();k++)
            {
                matrix[k][v[i+1]]=0;
            }
        }
    }
};