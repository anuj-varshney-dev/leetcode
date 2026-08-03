class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        for(int i=0;i<nums1.size();i++)
        {
            int m=nums2.size();
            while(m>0)
            {
                ans=ans^nums1[i];
                m--;
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            int n=nums1.size();
            while(n>0)
            {
                ans=ans^nums2[i];
                n--;
            }
        }
        return ans;
    }
};