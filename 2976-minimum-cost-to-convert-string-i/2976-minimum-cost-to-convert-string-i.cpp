class Solution {
public:
    long long minimumCost(string s,string t,vector<char>& o,vector<char>&c,vector<int>&cost) {
        int n=26;
        vector<vector<long long>> v(26,vector<long long>(26,LLONG_MAX));
        for(int i=0;i<26;i++)
        {
            v[i][i]=0;
        }
        for (int i = 0; i < o.size(); i++) {
            int u = o[i] - 'a';
            int u2 = c[i] - 'a';
            v[u][u2] = min(v[u][u2],(long long)cost[i]);
        }
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<26;j++)
            {
                for(int k=0;k<26;k++)
                {
                    if (v[j][i] !=LLONG_MAX && v[i][k]!=LLONG_MAX) {
                        v[j][k] = min(v[j][k], v[j][i] + v[i][k]);
                    }
                }
            }
        }
        long long ans=0;
        for(int i=0;i<s.size();i++)
        {
            if (v[s[i] - 'a'][t[i] - 'a'] ==LLONG_MAX) {
                return -1;
            }
            ans+=v[s[i]-'a'][t[i]-'a'];
        }
        return ans;
    }
};
