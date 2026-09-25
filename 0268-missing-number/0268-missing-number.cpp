class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        for(int i=0;i<=n;i++)
        {
            if(st.find(i)==st.end())
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};