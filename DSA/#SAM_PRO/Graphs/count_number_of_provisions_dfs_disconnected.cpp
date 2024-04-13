#include<iostream>
#include<vector>
#include<string>
using namespace std;

void dfs(int i,vector<int> adj[],int &vis[])
{
  vis[i]=1;
  for(auto x:adj[i])
  {
    if(!vis[x])
    {
      dfs(x,adj,vis);
    }
  }
}

int count_provision(int n,vector<int> adj[])
{
  int vis[n];
  memset(vis,0,sizeof(vis));
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(!vis[i])
    {
      dfs(i,adj,vis);
      count++;
    }
  }

  return count;
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

  int c=count_provisions(n,adj);

  cout<<"Number of count_provision"<<c<<endl;

  return 0;

}
