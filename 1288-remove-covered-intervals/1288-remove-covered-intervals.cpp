class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int cnt=0;
        int a=intervals[0][0];
        int b=intervals[0][1];
        int i=1;
        while(i<intervals.size())
        {
            int c=intervals[i][0];
            int d=intervals[i][1];
            if(c<=a && b<=d)
            {
                a=c;
                b=d;
                cnt++;
                i++;
            }
            else if(c>=a && b>=d)
            {
                cnt++;
                i++;
            }
            else
            {
                i++;
                a=c;
                b=d;
            }
        }
        return n-cnt;
    }
};