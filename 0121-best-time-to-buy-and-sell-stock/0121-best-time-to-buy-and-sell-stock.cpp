class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],maxprofit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(min>prices[i])
                min=prices[i];
            maxprofit=max(maxprofit,prices[i]-min);
        }
        return maxprofit;
    }
};