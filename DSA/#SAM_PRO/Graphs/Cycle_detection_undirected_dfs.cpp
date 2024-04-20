
#include<bits/stdc++.h>
using namespace std;


bool dfs(int s,int parent,int &vis[],vector<int> adj[])
{
  vis[s]=1;

  for(auto x: adj[s])
  {
    if(vis[x]==0)
    {
      if(dfs(x,s,vis,adj)==true)
      {
        return true;
      }
    }
    else if(x!=parent)
    {
      return true;
    }
  }
  return false;
}

bool iscycle(int n,vector<int> adj[])
{
  int vis[n];
  memset(vis,0,sizeof(vis));

  for( int i==0;i<n;i++)
  {
    if(!vis[i])
    {
      if(dfs(i,-1,vis,adj)==true)
      {
        return true;
      }
    }
  }
  return false;
}

int main()
{
  int m,n;
  cin>>m>>n;
  vector<int> adj[n];
  for(int i=0;i<m;i++)
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  if(iscycle(v,adj))
  {
    cout<<"Cycle";
  }
  else
  {
    cout<<"No Cycle";
  }

  return 0;
}
