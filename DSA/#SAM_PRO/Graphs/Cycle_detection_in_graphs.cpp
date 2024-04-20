// https://leetcode.com/problems/redundant-connection/description/

// BFS Approch

#include<iostream>
#include<utility>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;


bool detection(int s,int vis[],vector<int> adj[])
{
  vis[s]=1;
  queue<pair<int,int>> q;
  q.push({s,-1});

  while(!q.empty())
  {
    int node=q.front().first;
    int parent=q.front().second;
    q.pop();

    if(auto x: adj[node])
    {
      if(!vis[x])
      {
        vis[x]=1;
        q.push({x,node});
      }
      else if(x!=parent)
      {
        return true;
      }
    }
  }
  return false;
}


bool cycle_dection(int n,vector<int> adj[])
{
  int vis[n];
  memset(vis,0,sizeof(vis));

  for(int i=1;i<=n;i++)
  {
    if(!vis[i])
    {
      if(detection(i,vis,adj)==true)
      {
        return true;
      }
    }
  }
  return false;
}

int main()
{
  int n,e;
  cin>>n>>e;

  vector<int> adj[n];

  for(int i=0;i<e;i++)
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  if(cycle_dection(n,adj))
  {
    cout<<"It is a cycle";
  }
  else
  {
    cout<<"No cycle";
  }

  return 0;
}
