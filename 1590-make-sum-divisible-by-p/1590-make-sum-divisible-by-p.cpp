class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum%p==0)
        {
            return 0;
        }
        long long target=sum%p;
        unordered_map<long long,long long>mp;
        long long  curr=0;
        mp[0]=-1;
        long long res=INT_MAX;
        for(int j=0;j<n;j++)
        {
            curr=curr+nums[j];
            long long rem=(curr-target)%p;
            if(rem<0)
            {
                rem+=p;
            }
            if(mp.find(rem)!=mp.end())
            {
                res=min(res,j-mp[rem]);
            }
            mp[curr%p]=j;
        }
        if(res==INT_MAX || res==n)
        {
            return -1;
        }
        else
        {
            return res;
        }
    }
};