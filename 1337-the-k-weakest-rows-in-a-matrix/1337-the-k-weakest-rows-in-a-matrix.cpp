class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int c;
        int ans=0;
        vector<int>v;
        vector<pair<int,int>>m;
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
            m.push_back({c,i});
        }
        sort(m.begin(),m.end());
        for(int i=0;i<k;i++)
        {
                v.push_back(m[i].second);
        }
        return v;
    }
};