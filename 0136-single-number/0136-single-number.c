int singleNumber(int* nums, int numsSize){
    int i,ans;
    ans=0;
    for(i=0;i<numsSize;i++)
    {
            ans = ans^nums[i];
    }
    return ans;
}    