class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        if(secondList.size()<1)
        {
            return {};
        }
        if(firstList.size()<1)
        {
            return {};
        }
        vector<vector<int>>ans;
        int temp1,temp2;
       int i=0,j=0,n=secondList.size(),m=firstList.size();
       while(i<m && j<n)
       {
            int fst=firstList[i][0];
            int fend=firstList[i][1];
            int sst=secondList[j][0];
            int send=secondList[j][1]; 
            temp1=max(fst,sst);
            temp2=min(fend,send);
            if(temp1<=temp2)
            {
                     ans.push_back({temp1,temp2});
            }
            if(send>fend)
            {
                i++;
            }
            else
            {
                j++;
            }
       }
        return ans;
    }
};