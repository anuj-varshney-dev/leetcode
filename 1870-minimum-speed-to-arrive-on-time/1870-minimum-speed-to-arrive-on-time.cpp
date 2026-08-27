class Solution {
public:
    bool check(vector<int>& dist,long long speed,double hour)
    {
        double actual=0;
        for(int i=0;i<dist.size();i++)
        {
            double x = (double)dist[i]/speed;
            if(i==dist.size()-1)
            {
                actual+=x;
            }
            else
            {
                    actual+=ceil(x);
            }
        }
        if(actual<=hour)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        long long l = 1;
         long long r = 10000000;
        if(dist.size() > ceil(hour))
        {
                return -1;
        }
        while(l<r)
        {
            long long speed = l+(r-l)/2;
            if(check(dist,speed,hour))
            {
               r=speed;
            }
            else
            {
                l=speed+1;
            }
        }
        return l;
    }
};