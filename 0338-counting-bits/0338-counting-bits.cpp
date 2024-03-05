class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            int c=0,j=i;
            while(j>0)
            {
                if(j%2==1)
                {
                    c++;
                }
                j=j/2;
            }
            ans.push_back(c);
        }
        return ans;
    }
};