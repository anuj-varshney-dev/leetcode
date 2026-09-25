class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                cnt++;
                maxi=max(maxi,cnt);
            }
            else
            {
                cnt=0;
            }
        }
        if(maxi==INT_MIN)
        {
            return 0;
        }
        return maxi;
    }
};