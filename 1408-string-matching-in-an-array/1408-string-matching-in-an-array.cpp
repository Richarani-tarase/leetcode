class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>st;
        for(int i=0;i<words.size()-1;i++)
        {
            string s=words[i];
            for(int j=i+1;j<words.size();j++)
            {
                if(s.size()<words[j].size())
                {
                    if(words[j].find(s)!=-1)
                    {
                        st.insert(s);
                    }
                }
                else
                    if(s.find(words[j])!=-1)
                    {
                        st.insert(words[j]);
                    }
            }
        }
        vector<string>v;
        for(auto i:st)
        {
            v.push_back(i);
        }
        return v;
    }
};