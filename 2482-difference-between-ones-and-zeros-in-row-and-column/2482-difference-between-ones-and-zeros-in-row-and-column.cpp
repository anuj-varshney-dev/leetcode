class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row1=0;
        int col1=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<int>no1row;
         vector<int>no1col;
         vector<vector<int>>diff(m,vector<int>(n));
        for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
          {
                if(grid[i][j]==1)
                {
                    row1++;
                }
          }
          no1row.push_back(row1);
          row1=0;
        }
          for(int j=0;j<n;j++)
        {
          for(int i=0;i<m;i++)
          {
                if(grid[i][j]==1)
                {
                    col1++;
                }
          }
          no1col.push_back(col1);
          col1=0;
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                diff[i][j]=(2*no1row[i])+(2*no1col[j])-m-n;
            }
        }
        return diff;
    }
};