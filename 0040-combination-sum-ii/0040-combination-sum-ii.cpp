class Solution {
public:
    void finde(vector<int>& c, int t,set<vector<int>>& ans,vector<int>&v,int i,int n)
    {
        if (t==0) {
            ans.insert(v);
            return;
        }
        for(int j=i;j<n;j++)
        {
            if(j>i&&c[j]==c[j-1]) continue;
            if(t>=c[j])
            {
                v.push_back(c[j]);
                finde(c,t-c[j],ans,v,j+1,n);
                v.pop_back();
            }
            else break;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        set<vector<int>>ans;
        vector<int>v;
        sort(c.begin(),c.end());
        finde(c,t,ans,v,0,c.size());
        vector<vector<int>>v1;
        for(auto a:ans)
        {
            v1.push_back(a);
        }
        return v1;
    }
};