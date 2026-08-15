class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 0;
        }
        int mini=INT_MAX;
        long long diff=0;
        vector<long long>psum;
         vector<long long>ssum;
         long long  sump=0;
         long long sums=0;
         for(int i=0;i<nums.size();i++)
         {
            sump+=nums[i];
            psum.push_back(sump);
         }
        for(int i=nums.size()-1;i>=0;i--)
         {
            sums+=nums[i];
            ssum.push_back(sums);
         }
         reverse(ssum.begin(),ssum.end());
         int idxans=0;
         long long fdivi=1;
         long long ldivi=nums.size()-1;
         for(int i=0;i<ssum.size()-1;i++)
         {
            diff=abs(((psum[i]/fdivi)-(ssum[i+1]/ldivi))*1LL);
            if(diff<mini)
            {
                idxans=i;
                mini=diff;
            }
            fdivi++;
            ldivi--;
         }
         //edge case 
         fdivi=nums.size();
         diff=ssum[0]/fdivi;
        if(diff<mini)
        {
            idxans=nums.size()-1;
            mini=diff;
        }
         return idxans;
    }
};