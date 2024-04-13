#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<queue>
using namespace std;

void dfs_graphs(int s,vector<int> adj[],int vis[],vector<int> &ls)
{
  vis[s]=1;
  ls.push_back(s);

  for(auto x: adj[s])
  {
    if(!vis[x])
    {
      dfs(x,adj,vis,ls);
    }
  }
}

void dfs(int v,vector<int> adj[])
{
  int s=0;
  int vis[v];
  memset(vis,0,sizeof(vis));
  vector<int> ls;
  dfs_graphs(v,adj,s,ls);

  for(auto x: ls)
  {
    cout<<x<<" ";
  }
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

}
