class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>arr;
        for(int i=0;i<words.size();i++)
        {
            int j=0;
            while(words[i][j])
            {
                if(words[i][j]==x)
                {
                    arr.push_back(i);
                    break;
                }
                j++;
            }
        }
        return arr;
    }
};