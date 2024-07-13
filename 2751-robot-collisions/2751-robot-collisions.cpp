class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        vector<pair<int,int>>v;
        vector<int>ans;
    stack<pair<int,int>>s;
        for(int i=0;i<p.size();i++)
        {
            v.push_back({p[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<p.size();i++)
        {
            if(s.empty()||d[v[i].second]=='R')
            {
                s.push(v[i]);
            }
            else
            {
                while(!s.empty()&&d[s.top().second]=='R')
                {
                    pair<int,int> t=s.top();
                    if(h[t.second]==h[v[i].second])
                    {
                        h[t.second]=0;
                        h[v[i].second]=0;
                        s.pop();
                        break;
                    }
                    else if(h[t.second]>h[v[i].second])
                    {
                        h[v[i].second]=0;
                        h[t.second]--;
                        break;
                    }
                    else
                    {
                        s.pop();
                        h[v[i].second]--;
                        h[t.second]=0;
                    }
                }
                if(h[v[i].second]>0)
                {
                    s.push(v[i]);
                }
            }
        }
        for(auto it:h)
        {
            if(it!=0)
                ans.push_back(it);
        }
        return ans;
    }
};