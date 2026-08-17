class Solution {
public:
    bool isInc(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return false;
            }
        }
        return true;
    }
    bool isDec(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                return false;
            }
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        if(isInc(nums) || isDec(nums))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};