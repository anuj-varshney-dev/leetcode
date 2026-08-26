class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int>ans;
        int mini=INT_MAX;
        bool ok=false;
        int idx=-1;
        for(int i=0;i<intervals.size();i++)
        {
            int endofi=intervals[i][1];
            for(int j=0;j<intervals.size();j++)
            {
                int startofj=intervals[j][0];
                if(startofj>=endofi)
                {
                   ok=true;
                    if(mini>startofj)
                    {
                        mini=startofj;
                        idx=j;
                    }
                }
            }
            if(ok)
            {
                ans.push_back(idx);
            }
            else
            {
                ans.push_back(-1);
            }
            ok=false;
             mini=INT_MAX;
        }
        return ans;
    }
};