class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> m;
        for(auto x:sentence)
        {
            m[x]++;
        }
        if(m.size()==26)
        {
            return 1;
        }
        return 0;
    }
};