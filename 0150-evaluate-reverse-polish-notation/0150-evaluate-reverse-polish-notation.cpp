class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        long long ans=0;
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(tokens[i]=="+")
                {
                    ans=a+b;
                }
                else if(tokens[i]=="-")
                {
                    ans=b-a;
                }
                else if(tokens[i]=="*")
                {
                    ans=b*a;
                }
                else if(tokens[i]=="/" )
                {
                    ans=b/a;
                }
                st.push(ans);
            }
            else
            {
              st.push(stoi(tokens[i]));;
            }
        }
        return st.top();
    }
};