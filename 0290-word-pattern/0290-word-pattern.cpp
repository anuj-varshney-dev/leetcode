class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char>mp;
        unordered_set<char>st;
        string token;
        stringstream ss(s);
        vector<string>word;
        while(getline(ss,token,' '))
        {
           word.push_back(token);
        }
        if(word.size()!=pattern.size())
        {
            return false;
        }
        for(int i=0;i<pattern.size();i++)
        {
            if(mp.find(word[i])==mp.end() && st.find(pattern[i])==st.end())
            {
                mp[word[i]]=pattern[i];
                st.insert(pattern[i]);
            }
            else
            {
                if(mp[word[i]]!=pattern[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};