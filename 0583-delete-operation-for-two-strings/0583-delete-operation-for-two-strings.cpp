class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<int>c(m+1,0);
        vector<int>p(m+1,0);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(word1[i-1]==word2[j-1])
                {
                    c[j]=1+p[j-1];
                }
                else
                {
                    c[j]=max(c[j-1],p[j]);
                }
            }
            p=c;
        }
        return (n-c[c.size()-1]+m-c[c.size()-1]);
    }
};
