class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        vector<int> v;
        int k=0,total=0;
        for(int i=1;i<=(n*n);i++)
        {
            v.push_back(i);
            total++;
        }
        int srow=0;
        int erow=n-1;
        int scol=0;
        int ecol=n-1;
        int count=0;
        while(count<total)
        {
            for(int j=scol;j<=ecol&&count<total;j++)
            {
                ans[srow][j]=v[k];
                k++;
                count++;
            }
            srow++;
            for(int j=srow;j<=erow&&count<total;j++)
            {
                ans[j][ecol]=v[k];
                k++;
                count++;
            }
            ecol--;
            for(int j=ecol;j>=scol&&count<=total;j--)
            {
                ans[erow][j]=v[k];
                k++;
                count++;
            }
            erow--;
            for(int j=erow;j>=srow&&count<total;j--)
            {
                ans[j][scol]=v[k];
                k++;
                count++;
            }
            scol++;
        }
        return ans;
    }
};