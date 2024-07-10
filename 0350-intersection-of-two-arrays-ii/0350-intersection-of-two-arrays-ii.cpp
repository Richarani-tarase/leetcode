class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int n=nums1.size(),m=nums2.size();
        int i=0,j=0;
        // for(int i=0;i<n;i++)
        // {
        //     int c=0;
        //     for(int j=0;j<m;j++)
        //     {
        //         if(nums1[i]==nums2[j])
        //         {
        //             c=c+1;
        //             nums2[j]=-1;
        //             break;
        //         }
        //     }
        //     if(c>0)
        //     {
        //         arr.push_back(nums1[i]);
        //     }
        // }
        // return arr;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<n && j<m)
        {
            if(nums1[i]==nums2[j]) {
                arr.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            i++;
            else 
            j++;
        }
        return arr;
    }
};