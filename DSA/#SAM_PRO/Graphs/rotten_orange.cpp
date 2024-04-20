// https://leetcode.com/problems/rotting-oranges/

#include<iostream>
#include<utility>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int rotten_orange(vector<vector<int>> grid)
{
  int m=grid.size();
  int n=grid[0].size();
  vector<vector<int>> vis;
  //memset(vis,0,sizeof(vis));

  queue<pair<pair<int,int>,int>> q;

  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
     if(grid[i][j]==2)
     {
       q.push({{i,j},0});
       vis[i][j]=2;
     }
     else
     {
       vis[i][j]=0;
     }

    }
  }

  int tm=0;

  int drow[]={0,-1,0,1};
  int dcol[]={-1,0,1,0};


  while(!q.empty())
  {
    int r=q.front().first.first;
    int c=q.front().first.second;
    int t=q.front().second;
    int tm=max(t,tm);

    for(int i=0;i<4;i++)
    {
      int r1=r+drow[i];
      int c1=c+dcol[i];

      if(r1>=0 && r1<m && c1>=0 && c1<n && grid[i][j]!=2 && grid[i][j]==0)
      {
        q.push({r1,c1},t+1);
        vis[r1][c1]=1;
      }
    }

    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(grid[i][j]==1 && vis[i][j]!=2)
        {
          return -1;
        }
      }
    }

    return tm;
  }
}

int main()
{


}
