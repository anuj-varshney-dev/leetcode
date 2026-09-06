class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        while(j<n && n!=1)
        {
            while(j<n && nums[i]!=0)
            {
                i++;
                j=i+1;
            }
            if(j<n && nums[i]==0 && nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
    }
};