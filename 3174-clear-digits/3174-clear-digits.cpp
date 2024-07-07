class Solution {
public:
    string clearDigits(string str) {
        string s;
        for(int i=0;i<str.size();i++)
        {
            if(isdigit(str[i]))
            {
                s.pop_back();
            }
            else
            {
                s+=str[i];
            }
        }
        return s;
    }
};