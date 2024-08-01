class Solution {
public:
    int countSeniors(vector<string>& d) {
        int c=0;
        for(int i=0;i<d.size();i++)
        {
            int a=d[i][11]-'0';
            int b=d[i][12]-'0';
            a=a*10+b;
            if(a>60)
            {
                c++;
            }
        }
        return c;
    }
};