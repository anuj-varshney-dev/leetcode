class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
       vector<int>ans;
        int top=0;
        int bottom=m-1;
        int left=0;
        int right=n-1;
        int dir=0;
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(mat[top][i]);
                }
                top++;
            }
             if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    ans.push_back(mat[i][right]);
                }
                right--;
            }
              if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
            dir++;
            if(dir==4)
            {
                dir=0;
            }
        }
        return ans;
    }
};