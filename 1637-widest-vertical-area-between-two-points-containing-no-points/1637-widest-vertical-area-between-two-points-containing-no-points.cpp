class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int res=0;
        vector<int>v;
        for(int i=0;i<points.size();i++)
        {
            v.push_back(points[i][0]);
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>0;i--)
        {
            int ans=v[i]-v[i-1];
            res=max(res,ans);
        }return res;
    }
};