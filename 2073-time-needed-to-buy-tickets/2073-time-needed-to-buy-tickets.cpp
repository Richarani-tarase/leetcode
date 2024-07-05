class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        int s=0;
        int a=tickets[k];
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(tickets[j]>0)
                {
                    tickets[j]--;
                    s+=1;
                }
                if(tickets[k]==0)
                {
                    break;
                }
            }
        }
        return s;
    }
};