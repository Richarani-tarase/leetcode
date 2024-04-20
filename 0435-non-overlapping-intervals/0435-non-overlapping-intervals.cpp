class Solution {
public:
    
    static bool sortcolumn(const vector<int>& i1,const vector<int>& i2)
    {
        return i1[1] < i2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& i) {
        int c=0;
        sort(i.begin(),i.end(),sortcolumn);
        int k=0;
        for(int j=1;j<i.size();j++)
        {
            if(i[k][1]>i[j][0])
            {
                c++;
            }
            else{
                k=j;
            }
        }
        return c;
    }
};