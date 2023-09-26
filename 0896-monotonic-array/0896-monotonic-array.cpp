class Solution {
    // int lengthasc(vector<int> & nums){
    //     int count=1;
    //     for(int i=0;i<nums.size()-1;i++){
    //         if(nums[i]<=nums[i+1]){
    //             count++;
    //         }
    //     }
    //     return count;
    // }
    //  int lengthdec(vector<int> & nums){
    //     int count=1;
    //     for(int i=0;i<nums.size()-1;i++){
    //         if(nums[i]>=nums[i+1]){
    //             count++;
    //         }
    //     }
    //     return count;
    // }
public:
    bool isMonotonic(vector<int>& nums) {
        int c=1,count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                c++;
            }
        }
        if(c==nums.size())
        {
            return true;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                count++;
            }
        }    
        if(count==nums.size()){
            return 1;
        }
        return 0;
    
    }
};