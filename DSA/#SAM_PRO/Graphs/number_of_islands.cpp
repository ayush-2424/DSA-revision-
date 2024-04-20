#include<bits/stdc++.h>
using namespace std;


// 8 based direction
void bfs(int r,int c,vector<vector<int>> &vis,vector<vector<char>> &grid)
{
  vis[row][col]=1;
  int m=grid.size();
  int n=grid[0].size();
  queue<pair<int,int>> q;
  q.push({r,c});

  while(!q.empty())
  {
    int row=q.front().first;
    int col=q.front().second;

    for(int i=-1;i<=1;i++)
    {
      for(int j=-1;j<=1;j++)
      {
        int x=row+i;
        int y=col+j;
        if(!vis[x][y] && x>=0 && x<m && y>=0 && y<n && grid[x][y]=='1')
        {
          vis[x][y]=1;
          q.push({x,y});
        }
      }
    }
  }
}

int num_of_islands(int v,vector<vector<char>> &grid)
{
  int m=grid.size();
  int n=grid[0].size();

  vector<vector<int>> vis(m,vector<int>(n,0));
  int count=0;
  for(int r=0;r<m;r++)
  {
    for(int c=0;c<n;c++)
    {
      if(!vis[r][c])
      {
        count++;
        bfs(r,c,vis,grid);
      }
    }
  }
  return count;
}

int main()
{
  int m,n;
  cin>>m>>n;
  vector<int> adj[];
  for(int i=0;i<m;i++)
  {
    int u,v;
    cin>>u>>v;

  }

}
