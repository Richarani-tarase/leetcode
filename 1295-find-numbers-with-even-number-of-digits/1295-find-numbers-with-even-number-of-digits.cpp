// class Solution {
// public:
//     int findNumbers(vector<int>& nums) {
//         int even=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             int c=0;
//             while(nums[i]!=0)
//             {
//                 nums[i]=nums[i]/10;
//                 c++;
//             }
//             if(c%2==0)
//             {
//                 even++;
//             }
//         }
//         return even;
//     }
// };
class Solution {
public:
int getdigit(int n){
    int k=0;
    while(n!=0){
        n=n/10;
        k++;
    }
    if(k%2==0){
        return 1;
    }
    return 0;
}
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int j=getdigit(nums[i]);
            if(j==1){
                count++;
            }
        }
        return count;
    }
};