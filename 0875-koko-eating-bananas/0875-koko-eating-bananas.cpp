class Solution {
public:
    bool doable(vector<int>& piles,long long mid,int h)
    {
        long long cnt=0;
        for(int i=0;i<piles.size();i++)
        {
            cnt += (piles[i] + mid - 1)/mid;
        }
        if(cnt<=h)
        {
            return true;
        }
        else{
            return false;
        }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l=1;
        long long r=(long long)*max_element(piles.begin(),piles.end());
        while(l<r)
        {
            long long mid=l+(r-l)/2;
            if(doable(piles,mid,h))
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        } 
        return l;
    }
};