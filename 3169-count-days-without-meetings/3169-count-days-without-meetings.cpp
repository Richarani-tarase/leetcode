class Solution {
public:
    int countDays(int days, vector<vector<int>>& m) {
        int c=0;
        sort(m.begin(),m.end());
        int start=m[0][0];
        int end=m[0][1];
        for(int i=1;i<m.size();i++)
        {
            if(end>=m[i][0])
            {
                end=max(end,m[i][1]);
            }
            else
            {
                c+=(end-start+1);
                start=m[i][0];
                end=m[i][1];
            }
        }
        c+=(end-start+1);
        return(days-c);
    }
};