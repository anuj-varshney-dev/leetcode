class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
         sort(points.begin(),points.end());
         vector<int>prev=points[0];
         int cnt=1;
         for(int i=1;i<points.size();i++)
         {
            int prevstpt=prev[0];
            int prevendpt=prev[1];
            int currstpt=points[i][0];
            int currendpt=points[i][1];
            if(currstpt>prevendpt)
            {
                cnt++;
                prev=points[i];
            }
            else
            {
                prev[0]=max(prevstpt,currstpt);
                prev[1]=min(prevendpt,currendpt);
            }
         }
         return cnt;
    }
};