class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int great=0;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(int j=0;j<accounts[0].size();j++)
            {
                sum=sum+accounts[i][j];
            }
            if(great<sum)
            {
                great=sum;
            }
        }
        return great;
    }
};