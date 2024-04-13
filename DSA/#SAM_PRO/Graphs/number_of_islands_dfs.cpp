#include<bits/stdc++.h>
using namespace std;

void dfs(int i,int j,vector<vector<char>>& grid)
{
  int m=grid.size();
  int n=grid[0].size();

  if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='2' || grid[i][j]=='0')
  {
    return;
  }
  grid[i][j]='2';
  dfs(i-1,j,grid);
  dfs(i,j-1,grid);
  dfs(i+1,j,grid);
  dfs(i,j+1,grid);
}

int numIslands(vector<vector<char>>& grid)
{
    int m=grid.size();
    int n=grid[0].size();

    int c=0;

    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        dfs(i,j,grid);
        c++;
      }
    }
  return c;
}
