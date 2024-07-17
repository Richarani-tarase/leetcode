class Solution {
public:
    void generate(int n,int i,int j,vector<string>&v,string temp)
    {
        if(temp.size()==2*n)
        {
            v.push_back(temp);
        }
        if(i<n)
        generate(n,i+1,j,v,temp+'(');
        if(j<i)
        generate(n,i,j+1,v,temp+')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string> str;
        string temp;
        generate(n,0,0,str,temp);
        return str;
    }
};