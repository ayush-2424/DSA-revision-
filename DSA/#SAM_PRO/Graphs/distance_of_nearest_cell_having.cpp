// https://www.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1
#include<bits/stdc++h>
using namespace std;

// only mention que function

vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int m=grid.size();
      int n=grid[0].size();

      vector<vector<int>> vis(m,vector<int> (n,0));
      vector<vector<int>> dis(m,vector<int> (n,0));

      queue<pair<pair<int,int>,int> q;

      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(grid[i][j]==1)
          {
            vis[i][j]=1;
            q.push({{i,j},0});
          }
          else
          {
            vis[i][j]=0;
          }
        }
      }

      int drow[]={0,-1,0,1};
      int dcol[]={-1,0,1,0};

      while(!q.empty())
      {
        int r=q.front().first.first;
        int c=q.front().first.second;
        int s=q.front().second;

        dis[r][c]=s;

        for(int i=0;i<4;i++)
        {
          int r1=drow[i]+r;
          int c1=dcol[i]+c;

          if(r1>=0 && r1<m && c1>=0 && c1<n && vis[r1][c1]==0)
          {
            vis[r1][c1]=0;
            q.push({{r1,c1},s+1});
          }
        }
      }

      return dis;
	}

int main()
{

  return 0;
}
