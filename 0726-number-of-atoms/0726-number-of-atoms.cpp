class Solution {
public:
    string countOfAtoms(string f) {
        stack<unordered_map<string,int>>st;
        unordered_map<string,int>mp;
        int n=f.size(),i=0;
        while(i<n)
        {
            if(f[i]=='(')
            {
                st.push(mp);
                mp.clear();
                i++;
            }
            else if(f[i]==')')
            {
                unordered_map<string,int>m;
                m=mp;
                mp = st.top();
                st.pop();
                i++;
                int num=0;
                while(i<n&&isdigit(f[i]))
                {
                    num=num*10+(f[i]-'0');
                    i++;
                }
                num = (num == 0) ? 1 : num;
                //merge unordered maps stack to and the m
                for (auto &it:m)
                {
                    mp[it.first] += it.second * num;
                }
            }
            else
            {
                string a;
                a+=f[i];
                i++;
                while(i<n&&islower(f[i]))
                {
                    a+=f[i];
                    i++;
                }
                int b=0;
                while(i<n&&isdigit(f[i]))
                {
                    b=b*10+(f[i]-'0');
                    i++;
                }
                b = b == 0 ? 1 : b;
                    mp[a]+=b;
            }
        }
        vector<pair<string,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end());
        string ans="";
        for(auto &i:v)
        {
            ans+=i.first;
            if(i.second>1)
                ans+=to_string(i.second);
        }
        return ans;
    }
};