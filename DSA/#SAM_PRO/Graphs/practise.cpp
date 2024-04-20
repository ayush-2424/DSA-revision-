#include<iostream>
#include<string>
#include<cstring>
#include<utility>
#include<
using namespace std;



void bfs(int n,vector<int> adj[])
{
  int vis[n];
  memset(vis,0,sizeof(vis));
  vis[0]=1;
  queue<int> q;
  q.push(0);

  while(!q.empty())
  {
    int node=q.front();
    q.pop();

    for(auto x: adj[node])
    {
      if(!vis[x])
      {
        q.push(x);
        vis[x]=1;

      }
    }
  }
}

void dfs_graphs(int s,int &vis[],int &ans[],vector<int> adj[])
{
  vis[s]=1;
  ans.push_back(s);

  for(auto x: adj[s])
  {
    if(!vis[x])
    {
      dfs_graphs(x,vis,ans,adj);
    }
  }
}

void dfs(int n,vector<int> adj[])
{
  int vis[n];
  memset(vis,0,sizeof(vis));
  vis[0]=1;
  int s=0;
  vector<int> ans;
  dfs_graphs(s,vis,ans,adj);

  for(auto x: ans)
  {
    cout<<x<<" "<<endl;
  }
}


int main()
{
  int n;
}
