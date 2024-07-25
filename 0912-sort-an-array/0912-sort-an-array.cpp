class Solution {
public:
    void mergesort(int s,int e,vector<int> &nums)
    {
        if(s<e){
            int mid=s+(e-s)/2;
            mergesort(s,mid,nums);
            mergesort(mid+1,e,nums);
            merge(s,mid,e,nums);
        }
    }
    void merge(int s,int mid,int e,vector<int>&nums)
    {
        vector<int>l;
        vector<int>r;
        for(int i=s;i<=mid;i++)
        {
            l.push_back(nums[i]);
        }
        for(int i=mid+1;i<=e;i++)
        {
            r.push_back(nums[i]);
        }
        int i=0,j=0,index=s;
        while(i<l.size()&&j<r.size())
        {
            if(l[i]<r[j])
            {
                nums[index]=l[i];
                i++,index++;
            }
            else
            {
                nums[index]=r[j];
                j++,index++;
            }
        }
        while(j!=r.size())
        {
            nums[index]=r[j];
            j++,index++;
        }
        while(i!=l.size())
        {
            nums[index]=l[i];
            i++,index++;
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(0,nums.size()-1,nums);
        return nums;
    }
};