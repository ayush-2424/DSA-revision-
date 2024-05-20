#include<bits/stdc++.h>
using namespace std;

bool dfs(int i,int vis[],int pathvis[],vector<int> adj)
{
  vis[i]=1;
  pathvis[i]=1;

  for(auto x: adj[i])
  {
    if(!vis[x])
    {
      if(dfs(x,vis,pathvis,adj)==true)
      {
        return true;
      }
    }
    else if(path[x]==1 && vis[x]==1)
    {
      return true;
    }
  }
  path[i]=0;
  return false;
}

bool isCyclic(int V, vector<int> adj[])
{
  int pathvis[V];
  int vis[V];
  memset(pathvis,V,sizeof(pathvis));
  memset(vis,V,sizeof(vis));

  for(int i=0;i<V;i++)
  {
    if(!vis[i])
    {
      if(dfs(i,vis,pathvis,adj)==true)
      {
        return true;
      }
    }
  }
  return false;
}

int main()
{

  return 0;
}
