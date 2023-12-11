/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int* arr;
    arr=(int*)malloc(2*sizeof(int));
    arr[0]=-1;
    arr[1]=-1;
    * returnSize=2;
    int s=0,e=numsSize-1,mid=0;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(nums[mid]==target)
        {
            arr[0]=mid;
            e=mid-1;
        }
        else if(nums[mid]<target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    s=0,e=numsSize-1;
     while(s<=e)
    {
        mid=(s+e)/2;
        if(nums[mid]==target)
        {
            arr[1]=mid;
            s=mid+1;
        }
        else if(nums[mid]<target)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return arr;
}