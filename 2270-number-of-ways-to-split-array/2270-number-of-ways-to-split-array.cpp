class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {

        long long cnt = 0;
        long long n = nums.size();

        long long sum = accumulate(nums.begin(), nums.end(), 0LL);

        long long leftSum = 0;

        for(int i = 0; i < n - 1; i++)
        {
            leftSum += nums[i];

            long long rightSum = sum - leftSum;

            if(leftSum >= rightSum)
            {
                cnt++;
            }
        }

        return cnt;
    }
};