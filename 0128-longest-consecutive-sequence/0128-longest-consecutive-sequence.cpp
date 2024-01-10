class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int count=1;
        int max=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<1){
            return 0;
        }
        else if(n==1){
            return max;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]==1){
                count++;
            }
            else if(nums[i+1]-nums[i]==0){
                count=count;
            }
            else{
                count=1;
            }
            if(max<count){
                max=count;
            }
        }
        return max;
    }
};