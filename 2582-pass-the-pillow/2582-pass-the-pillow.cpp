class Solution {
public:
    int passThePillow(int n, int time) {
      int a=n-1-time%(2*n-2);
        return n-abs(a);
    }
};