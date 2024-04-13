#include<bits/stdc++.h>
using namespace std;

void bfs(int i,int j,vector<vector<int>> vis,vector<vector<char>>& grid)
{
  int m=grid.size();
  int n=grid[0].size();

  int drow[]={-1,0,1,0};
  int dcol[]={0,-1,0,1};

  vis[i][j]=1;
  queue<pair<int,int>> q;
  q.push({i,j});

  while(!q.empty())
  {
    int r=q.front().first;
    int c=q.front().second;

    for(int i=0;i<4;i++)
    {
      int x=r+drow[i];
      int y=c+dcol[i];

      if(x>=0 && x<m && y>=0 && y<n && grid[x][y]=='1'&& !vis[x][y])
      {
        vis[x][y]=1;
        q.push({x,y});
      }
    }
  }
}

int numIslands(vector<vector<char>>& grid)
{
  int m=grid.size();
  int n=grid[0].size();

  vector<vector<int>> vis(m,vector<int>(n,0));
  int c=0;

  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(!vis[i][j] && grid[i][j]=='1')
      {
        bfs(i,j,vis,grid);
        c++;
      }
    }
  }

  return c;
}
