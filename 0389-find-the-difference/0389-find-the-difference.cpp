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
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i]%2==1)
            {
                return i;
            }
        }
        return NULL;
    }
};