#include<bits/stdc++.h>
using namespace std;


void bfs(int v,vector<int> adj[])
{
  int vis[n];
  memset(vis,0,sizeof(vis));
  vector<int> ls;
  queue<int> q;
  vis[0]=1;
  q.push(0);

  while(!q.empty())
  {
    int node=q.front();
    q.pop();
    ls.push_back(node);

    for(auto x: adj[node])
    {
      if(!vis[x])
      {
        vis[x]=1;
        q.push(x);
      }
    }
  }

  for(auto x: ls)
  {
    cout<<x<<" ";
  }

}

void dfs_graphs(int s,vector<int> adj[],int vis[],vector<int> &ls)
{
  vis[s]=1;
  ls.push_back(s);
  for(auto x: adj[s])
  {
    if(!vis[x])
    {
      dfs_graphs(x,adj,vis,ls);
    }
  }
}

void dfs(int v,vector<int> adj[])
{
  int s=0;
  int vis[v];
  memset(vis,0,sizeof(vis));
  vector<int> ls;
  dfs_graphs(s,adj,vis,ls);
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

  dfs(n,adj);

  bfs(n,adj);

  return 0;
}
