class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int tarcnt=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]==target)
                {
                    tarcnt++;
                }
                if(tarcnt>(j-i+1)/2)
                {
                    ans++;
                }
            }
            tarcnt=0;
        }
        return ans;
    }
};