class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string str="";
        int j=0,c=0;
        int i=0;
        for(i=0,j=0;i<s.length(),j<spaces.size();i++)
        {
            if(c==spaces[j])
            {
                str+=' ';
                j++;
            }
            str+=s[i];
            c++;
        }
        while(i!=s.length())
        {
            str+=s[i];
            i++;
        }
        return str;
    }
};