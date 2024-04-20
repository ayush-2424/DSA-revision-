// https://www.geeksforgeeks.org/problems/replace-os-with-xs0052/1

#include<bits/stdc++.h>
using namespace std;


void dfs(int r,int c,vector<vector<int>> &vis,vector<vector<char>> &mat)
{
  vis[r][c]=1;

  int drow[]={0,-1,0,1};
  int dcol[]={-1,0,1,0};

  int n=mat.size();
  int m=mat[0].size();

  for(int i=0;i<4;i++)
  {
    int x=drow[i]+r;
    int y=dcol[i]+c;

    if(x>=0 && x<n && y>=m && y<m && vis[x][y]==0 && mat[x][y]=='O')
    {
      dfs(x,y,vis,mat);
    }
  }
}

vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
{
  vector<vector<int>> vis(n,vector<int> (m,0));

  for(int i=0;i<n;i++)
  {
    if(!vis[i][0] && mat[i][0]=='O')
    {
      dfs(i,0,vis,mat);
    }
    if(!vis[i][m-1] && mat[i][m-1]=='O')
    {
      dfs(i,m-1,vis,mat);
    }
  }

  for(int i=0;i<m;i++)
  {
    if(!vis[0][i] && mat[0][i]=='O')
    {
      dfs(0,i,vis,mat);
    }
    if(!vis[n-1][i] && mat[n-1][i]=='O')
    {
      dfs(n-1,i,vis,mat);
    }
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(vis[i][j]==0 && mat[i][j]=='O')
      {
        mat[i][j]='X';
      }
    }
  }


  return mat;
}

int main()
{

  return 0;
}
