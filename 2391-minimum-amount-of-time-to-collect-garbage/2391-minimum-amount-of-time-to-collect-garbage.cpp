class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int mindex=0,gindex=0,pindex=0,mc=0,gc=0,pc=0;
        string s;
        for(int i=0;i<garbage.size();i++)
        {
            s=garbage[i];
            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='G')
                {
                    gc++;
                    gindex=i;
                }
                if(s[j]=='M')
                {
                    mc++;
                    mindex=i;
                }
                if(s[j]=='P')
                {
                    pc++;
                    pindex=i;
                }
            }
        }
        int m=gc+mc+pc;
        for(int i=0;i<gindex;i++)
            {
                m+=travel[i];
            }
        for(int i=0;i<mindex;i++)
            {
                m+=travel[i];
            }
        for(int i=0;i<pindex;i++)
            {
                m+=travel[i];
            }
        return m;
    }
};