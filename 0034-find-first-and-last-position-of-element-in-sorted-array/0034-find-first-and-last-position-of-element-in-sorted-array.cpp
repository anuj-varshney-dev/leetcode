class Solution {
public:
int lidx=-1,ridx=-1;
    int lbs(vector<int>& nums, int target)
    {
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                lidx=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return lidx;
    }
    int rbs(vector<int>& nums, int target)
    {
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ridx=mid;
               s=mid+1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ridx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        ans[0]=lbs(nums,target);
         ans[1]=rbs(nums,target);
         return ans;
    }
};