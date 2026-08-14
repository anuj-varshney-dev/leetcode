class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int evensum=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                evensum+=nums[i];
            }
        }
        for(int i=0;i<queries.size();i++)
        {
            int val=queries[i][0];
            int idx=queries[i][1];
            if(nums[idx]%2==0)
            {
                evensum-=nums[idx];
            }
            nums[idx]=nums[idx]+val;
             if(nums[idx]%2==0)
            {
                evensum+=nums[idx];
               
            }
            ans.push_back(evensum);
        }
        return ans;
    }
};