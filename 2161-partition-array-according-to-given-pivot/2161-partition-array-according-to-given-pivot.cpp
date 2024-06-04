class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
      vector<int>ans;
      int c=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]<p){
            ans.push_back(nums[i]);
        }
        if(nums[i]==p){
            c++;
        }
      }
      while(c--){
        ans.push_back(p);
      }
      for(int i=0;i<nums.size();i++){
        if(nums[i]>p){
            ans.push_back(nums[i]);
        }
      }
      return ans;
    }
};