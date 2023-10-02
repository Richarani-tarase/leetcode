double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int n=nums1Size+nums2Size;
    int nums[n];
    double ans=0;
    for(int i=0;i<nums1Size;i++)
    {
        nums[i]=nums1[i];
    }
     for(int i=0;i<nums2Size;i++)
    {
        nums[nums1Size]=nums2[i];
        nums1Size++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]>nums[j])
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
            continue;
        }
    }
    int e=n-1,s=0,mid=0;
        mid=(s+e)/2;
        if(e%2!=0)
        {
            ans=(nums[mid]+nums[mid+1])/2.0;
        }
        else
            ans=nums[mid];
    return ans;
}