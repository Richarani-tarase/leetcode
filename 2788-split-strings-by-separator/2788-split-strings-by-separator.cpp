class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(int i=0;i<words.size();i++)
        {
            string s="";
            for(int j=0;j<words[i].size();j++)
            {
                if(words[i][j]==separator && s!="")
                {
                    ans.push_back(s);
                    s="";
                    continue;
                }
                else if(words[i][j]!=separator)
                {
                    s+=words[i][j];
                }
            }
            if(s!="")
            ans.push_back(s);
        }
        return ans;
    }
};