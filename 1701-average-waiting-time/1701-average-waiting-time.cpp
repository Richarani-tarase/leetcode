class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        int time=c[0][0];
        double a=0;
        for(int i=0;i<c.size();i++)
        {
            if(time<c[i][0]){
                time=c[i][0]+c[i][1];
            }
            else{
            time+=c[i][1];
            }
            a+=(time-c[i][0]);
        }
        return a/c.size();
    }
};