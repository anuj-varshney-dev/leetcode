class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1)
        {
            return intervals;
        }
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        vector<int>prev=intervals[0];
        for(int i=1;i<intervals.size();i++)
        {
            int currstpt=intervals[i][0];
            int currendpt=intervals[i][1];
            int prevstpt=prev[0];
            int prevendpt=prev[1];
            if(currstpt>prevendpt)
            {
                ans.push_back(prev);
                prev=intervals[i];
            }
            else
            {
                prev[0]=min(currstpt,prevstpt);
                prev[1]=max(currendpt,prevendpt);
            }
        }
        ans.push_back(prev);
        return ans;
    }
};