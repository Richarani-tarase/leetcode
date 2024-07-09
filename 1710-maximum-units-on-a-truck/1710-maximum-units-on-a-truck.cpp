class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& b, int truck) {
        sort(b.begin(),b.end(),cmp);
        int ans=0;
        int t=truck;
        for(int i=0;i<b.size();i++)
        {
            if(b[i][0]<=t)
            {
                t=t-b[i][0];
                ans+=b[i][0]*b[i][1];
            }
            else
            {
                ans+=b[i][1]*t;
                t=0;
                break;
            }
        }
        return ans;
    }
};