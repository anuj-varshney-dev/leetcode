class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
          if(ops.size()==0)
        {
            return m*n;
        }
        int mini1=INT_MAX;
         int mini2=INT_MAX;
        for(int i=0;i<ops.size();i++)
        {
            int st=ops[i][0];
            mini1=min(mini1,st);
        }
         for(int i=0;i<ops.size();i++)
        {
            int st=ops[i][1];
            mini2=min(mini2,st);
        }
        long long ans=mini1*mini2;
        return ans;
    }
};