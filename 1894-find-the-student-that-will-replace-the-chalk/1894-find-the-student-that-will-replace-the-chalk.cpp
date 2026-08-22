class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
       long long sum=0;
       int ans=-1;
        for(int i=0;i<chalk.size();i++)
        {
            sum+=chalk[i];
        }
        while(k>=sum)
        {
            k-=sum;
        }
        for(int i=0;i<chalk.size();i++)
        {
            if(k>=chalk[i])
            {
                k-=chalk[i];
            }
            else
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};