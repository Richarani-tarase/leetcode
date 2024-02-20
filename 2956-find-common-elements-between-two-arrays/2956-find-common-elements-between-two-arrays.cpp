class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(2);
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int c=0;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    c++;
                    break;
                }
            }
        }
        v[0]=c;
        c=0;
        for(int i=0;i<nums2.size();i++)
        {
            for(int j=0;j<nums1.size();j++)
            {
                if(nums2[i]==nums1[j])
                {
                    c++;
                    break;
                }
            }
        }
        v[1]=c;
        return v;
    }
};