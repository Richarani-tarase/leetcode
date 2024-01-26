class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        
        for(int i=0;i<nums1.size();i++)
        {
            int index=-1;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    index=j;
                }
            }
            if(index==nums2.size()-1)
            {
                v.push_back(-1);
            }
            else
            {
                int f=0;
                for(int k=index+1;k<nums2.size();k++)
                {
                    if(nums1[i]<nums2[k])
                    {
                        f=1;
                        v.push_back(nums2[k]);
                        break;
                    }
                }
                if(f==0)
                {
                    v.push_back(-1);
                }
                    
            }
        }
        return v;
    }
};