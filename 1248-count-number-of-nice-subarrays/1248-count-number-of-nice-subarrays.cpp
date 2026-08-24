class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int res=0;
        long long currsum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                nums[i]=0;
            }
            else
            {
                 nums[i]=1;
            }
            currsum+=nums[i];
            if(mp.find(currsum-k)!=mp.end())
            {
                res+=mp[currsum-k];
            }
                mp[currsum]++;
        }
        return res;
    }
};