class Solution {
public:
    bool anagram(string s1,string s2)
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
            return true;
        return false;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i=1;i<words.size();)
        {
            if(anagram(words[i-1],words[i]))
                words.erase(words.begin()+i);
            else i++;
        }
        return words;
    }
};