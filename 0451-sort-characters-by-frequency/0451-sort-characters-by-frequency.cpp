class Solution {
public:
    string frequencySort(string s) {
        string str="";
        unordered_map<char,int>m;
        for(auto i:s)
        {
            m[i]++;
        }
        vector<pair<int,char>>v;
        for(auto i:m)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(auto i:v)
        {
            while(i.first)
            {
                str+=i.second;
                i.first--;
            }
        }
        return str;
    }
};