class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>mp;
        for(auto x:s)
        {
            mp[x]++;
        }
        for(auto x:t)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            if(x.second%2==1)
            {
                return x.first;
            }
        }
        return ' ';
    }
};