class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c=0;
       for(int i=0;i<items.size();i++)
       {
           if((ruleKey=="type"&&ruleValue==items[i][0])||(ruleKey == "color" && ruleValue == items[i][1])||(ruleKey == "name" && ruleValue == items[i][2]))
           {
               c++;
           }
       }
        return c;
    }
};