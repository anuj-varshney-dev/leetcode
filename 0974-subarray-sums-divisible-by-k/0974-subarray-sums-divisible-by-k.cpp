class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        long long cursum=0;
        long long cnt=0;

        for(int i=0;i<nums.size();i++)
        {
            cursum+=nums[i];
            long long rem=cursum%k;
            if(rem<0)
            {
                rem=rem+k;
            }
            if(mp.find(rem)!=mp.end())
            {
                cnt+=mp[rem];
            }
            mp[rem]++;
        }
        return cnt;
    }
};