class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        long long s=0;
        for(auto i:gifts){
            pq.push(i);
        }
        while(k>0){
            int i=pq.top();
            pq.pop();
            i=sqrt(i);
            pq.push(i);
            k--;
        }
        while(!pq.empty()){
            s+=pq.top();
            pq.pop();
        }
        return s;
    }
};