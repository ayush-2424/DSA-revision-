#include<iostream>
#include<vector>
#include<string>
using namespace std;


vector<int> bfs(vector<int> adj[],int v)
{
  int vis[v];
  memset(vis,0,sizeof vis);
  queue<int> q;
  vector<int> bfs;
  vis[0]=1;
  q.push(0);

  while(!q.empty()){
    int node = q.front();
    q.pop();

    bfs.push_back(node);

    for(auto x: adj[node])
    {
      if(!vis[x])
      {
        vis[x]=1;
        q.push(x);
      }
    }
  }
  return bfs;
}

int main()
{
  int v;
  cin>>v;
  vector<int> adj[v];
  for(int i=0;i<v;i++)
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  ans=bfs(adj);

  for(auto x: ans)
  {
    cout<<x<<" ";
  }

  return 0;
}
