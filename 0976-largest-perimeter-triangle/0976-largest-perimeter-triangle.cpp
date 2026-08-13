class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        int area;
        int n=nums.size();
        for(int i=n-1;i>1;i--)
        {
            int last=nums[i];
            int first=nums[i-1];
            int second=nums[i-2];
            if(first+second>last)
            {
                area=first+second+last;
                maxi=max(maxi,area);
            }
        }
        return maxi;
    }
};