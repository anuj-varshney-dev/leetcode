class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int freq[100000]={0};
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(freq[i]>=2)
            {
                ans.push_back(i);
            }
        }
         for(int i=1;i<=n;i++)
        {
            if(freq[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};