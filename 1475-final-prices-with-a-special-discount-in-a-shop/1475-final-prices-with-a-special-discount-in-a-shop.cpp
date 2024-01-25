class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> arr;
        for(int i=0;i<prices.size()-1;i++)
        {
            int max=0;
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[i]>=prices[j])
                {
                    max=prices[j];
                    break;
                }
                continue;
            }
            arr.push_back(prices[i]-max);
        }
        arr.push_back(prices[prices.size()-1]);
        return arr;
    }
};