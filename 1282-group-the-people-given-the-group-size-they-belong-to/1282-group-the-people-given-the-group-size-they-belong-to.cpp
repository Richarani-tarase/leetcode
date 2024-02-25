class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        for(int i=0;i<groupSizes.size();i++)
        {
            vector<int>temp;
            int c=groupSizes[i];
            if(c==0)
            {
                continue;
            }
            else{
                temp.push_back(i);
                c--;
            }
            for(int j=i+1;j<groupSizes.size();j++)
            {
                if(c==0)
                {
                    break;
                }
                if(groupSizes[i]==groupSizes[j])
                {
                    temp.push_back(j);
                    groupSizes[j]=0;
                    c=c-1;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};