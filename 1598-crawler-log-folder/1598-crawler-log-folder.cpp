class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c=0;
        stack<string>s;
        for(auto it:logs)
        {
            if(!s.empty()&&it[0]=='.'&&it[1]=='.')
            {
                s.pop();
            }
            else if(it[0]=='.')
            {
                continue;
            }
            else
            {
                s.push(it);
            }
        }
        return s.size();
    }
};