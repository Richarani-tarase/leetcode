class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int c=0,max=0,a=0,b=0;
        for(int i=0;i<mat.size();i++)
        {
            c=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                }
            }
            if(c>b)
            {
                a=i;
                b=c;
            }
        }
        return{a,b};
    }
};