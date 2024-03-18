class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>ans;
        for(int i=0;i<matrix.size();i++)
        {
            int a=0,min=INT_MAX;
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]<min)
                {
                    min=matrix[i][j];
                    a=j;
                }
            }
            int max=INT_MIN,b=0;
            for(int k=0;k<matrix.size();k++)
            {
                if(matrix[k][a]>max)
                {
                    max=matrix[k][a];
                    b=k;
                }
            }
            if(b==i)
            {
             ans.push_back(matrix[b][a]);
            }
        }
        return ans;
    }
};