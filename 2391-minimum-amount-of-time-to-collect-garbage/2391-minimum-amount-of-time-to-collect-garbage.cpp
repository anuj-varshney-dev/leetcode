class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int res=0;
        for(int i=1;i<travel.size();i++)
        {
            travel[i]=travel[i]+travel[i-1];
        }
        int midx=-1,pidx=-1,gidx=-1;
        for(int i=0;i<garbage.size();i++)
        {
            for(int j=0;j<garbage[i].size();j++)
            {
                char ch=garbage[i][j];
                if(ch=='G')
                {
                    gidx=i;
                }
                else if(ch=='P')
                {
                    pidx=i;
                }
                else
                {
                    midx=i;
                }
                res++;
            }
        }
        if(midx>0)
        {
            res+=travel[midx-1];
        }
        if(pidx>0)
        {
            res+=travel[pidx-1];
        }
        if(gidx>0)
        {
            res+=travel[gidx-1];
        }
        return res;
    }
};