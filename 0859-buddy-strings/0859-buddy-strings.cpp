class Solution {
public:
    bool check(string s)
    {
        int freq[26]={0};
        for(char ch : s)
        {
            freq[ch-'a']++;
            if(freq[ch-'a']>1)
            {
                return true;
            }
        }
        return false;
    }
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())
        {
            return false;
        }
        if(s==goal)
        {
            if(check(s))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        vector<int>index;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=goal[i])
            {
                index.push_back(i);
            }
        }
        if(index.size()!=2)
        {
            return false;
        }
        int i1=index[0];
        int i2=index[1];
        swap(s[i1],s[i2]);
        if(s==goal)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};