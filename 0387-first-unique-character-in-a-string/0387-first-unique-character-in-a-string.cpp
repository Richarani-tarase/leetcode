class Solution {
public:
    int firstUniqChar(string s) {
        // map<char,int> m;
        // for(auto i:s)
        // {
        //     m[i]++;
        // }
        // for(int i=0;i<s.size();i++)
        // {
        //     if(m[s[i]]==1){
        //         return i;
        //     }   
        // }
        // return -1;
        int flag;
        for(int i=0;i<s.size();i++)
        {
            flag=0;
            for(int j=0;j<s.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                else if(s[i]==s[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                return i;
            }
        }
        return -1;
    }
};