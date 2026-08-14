class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n));
        int num=1;
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        int dir=0;
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    mat[top][i]=num;
                    num++;
                }
                top++;
            }
             if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    mat[i][right]=num;
                    num++;
                }
                right--;
            }
              if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    mat[bottom][i]=num;
                    num++;
                }
                bottom--;
            }
            if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    mat[i][left]=num;
                    num++;
                }
                left++;
            }
            dir++;
            if(dir==4)
            {
                dir=0;
            }
        }
        return mat;
    }
};