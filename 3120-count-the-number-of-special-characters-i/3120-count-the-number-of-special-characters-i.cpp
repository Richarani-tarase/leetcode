class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='a'&&word[i]<='z')
            a[int(word[i])-97]=1;
            else
                b[int(word[i])-65]=1;
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(a[i]==1&&b[i]==1)
                c++;
        }
        return c;
    }
};