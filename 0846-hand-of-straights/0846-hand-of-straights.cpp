class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        for(int i=0;i<hand.size();i++)
        {
            mp[hand[i]]++;
        }
        while(!mp.empty())
        {
            int curr = mp.begin()->first;
            for(int j=0;j<groupSize;j++)
            {
                if(mp[curr+j]==0)
                {
                    return false;
                }
                mp[curr+j]--;
                 if(mp[curr + j] == 0)
                     {
                         mp.erase(curr + j);
                     }
            }
        }
        return true;
    }
};