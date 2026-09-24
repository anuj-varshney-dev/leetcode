class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;

            int tar = -nums[i];
            int st = i + 1;
            int end = n - 1;

            while(st < end)
            {
                int sum = nums[st] + nums[end];

                if(sum == tar)
                {
                    ans.push_back({nums[i], nums[st], nums[end]});

                    st++;
                    end--;

                    while(st < end && nums[st] == nums[st-1])
                        st++;

                    while(st < end && nums[end] == nums[end+1])
                        end--;
                }
                else if(sum < tar)
                {
                    st++;
                }
                else
                {
                    end--;
                }
            }
        }

        return ans;
    }
};