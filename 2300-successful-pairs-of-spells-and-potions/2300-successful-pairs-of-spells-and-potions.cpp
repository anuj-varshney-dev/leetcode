class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        int n=potions.size();
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++)
        {
            int test=spells[i];
            int s=0;
            int e=n-1;
            while(s<e)
            {
                int mid=s+(e-s)/2;
                if((1LL*potions[mid]*test)>=success)
                {
                    e=mid;
                }
                else
                {
                    s=mid+1;
                }
            }
            if((1LL*potions[s]*test)>=success)
            {
                         int res=n-s;
                    ans.push_back(res);
            }
            else
            {
                  ans.push_back(0);
            }
        }
        return ans;
    }
};