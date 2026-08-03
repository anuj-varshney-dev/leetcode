class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int d,e;
        for(int i=0;i<nums.size();i++)
        {
            d=nums[i];
             for(int j=i+1;j<nums.size();j++)
             {
                e=nums[j];
             if((d+e)==target)
             {
                return {i,j};
             }
        }
        
    }
    return {};
    }
};