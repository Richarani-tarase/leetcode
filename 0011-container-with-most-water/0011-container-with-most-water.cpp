class Solution {
public:
    int maxArea(vector<int>& height) {
        int ma=INT_MIN;
        int s=0,e=height.size()-1;
        while(s<e)
        {
            int ans=min(height[s],height[e])*(e-s);
            ma=max(ma,ans);
            if(height[s]<height[e])
            {
                s++;
            }
            else
                e--;
        }
        return ma;
    }
};