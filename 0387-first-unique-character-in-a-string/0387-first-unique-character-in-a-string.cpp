class Solution {
public:
    int firstUniqChar(string s) {
        int flag;
        for(int i=0;i<s.size();i++)
        {
            flag=0;
            for(int j=0;j<s.size();j++)
            {
                if(i!=j&&s[i]==s[j])
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