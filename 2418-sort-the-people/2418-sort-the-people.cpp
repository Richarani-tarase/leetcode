class Solution {
public
    :static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        return a.first>b.first;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>ans(heights.size());
        vector<pair<int,int>>v;
        for(int i=0;i<heights.size();i++)
        {
            v.push_back({heights[i],i});
        }
       sort(v.begin(), v.end(),cmp);
        for(int j=0;j<v.size();j++)
        {
              ans[j]=names[v[j].second];
        }
        return ans;  
    }
};