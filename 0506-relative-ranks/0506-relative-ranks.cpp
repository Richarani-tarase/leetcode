class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans(score.size());
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++)
        {
            pq.push({score[i],i});
        }
        int c=1;
        while(!pq.empty())
        {
            int b=pq.top().first;
            int a=pq.top().second;
            
            pq.pop();
            if(c==1)
            {
                ans[a]="Gold Medal";
            }
            else if(c==2)
            {
                ans[a]="Silver Medal";
            }
            else if(c==3)
            {
                ans[a]="Bronze Medal";
            }
            else
            {
                ans[a]=to_string(c);
            }
            c++;
        }
        return ans;
    }
};