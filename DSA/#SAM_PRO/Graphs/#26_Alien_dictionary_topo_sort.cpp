//https://www.geeksforgeeks.org/problems/alien-dictionary/1

#include<iostream>
#include<algorithm>
#include<string>
#include<ctsring>
#include<queue>
using namespace std;

vector<int> topo(int n,vector<int> adj[])
{
  int indegree[n];
  memset(indegree,0,sizeof(indegree));

  for(int i=0;i<n;i++)
  {
    for(auto x: adj[i])
    {
      indegree[x]++;
    }
  }
  queue<int> q;
  for(int i=0;i<n;i++)
  {
    if(indegree[i]==0)
    {
      q.push(i);
    }
  }
  vector<int> ans;
  while(!q.empty())
  {
    int x=q.front();
    q.pop();
    ans.push_back(x);
    for(auto t: adj[x])
    {
      indegree[t]--;
      if(indegree[t]==0)
      {
        q.push(t);
      }
    }
  }

  return ans;
}

string alien_dict(string dict[], int N, int K) {

 vector<int> adj[K];
for(int i=0;i<N;i++)
{
  string s1=dict[i];
  string s2=dict[i+1];

  int l=min(s1.size(),s2.size());

  for(int p=0;p<l;p++)
  {
    if(s1[p]!=s2[p])
    {
      adj[s1[p]-'a'].push_back(s2[p]-'a');
      break;
    }
  }
}

vector<int> v=topo(K,adj);
string s="";
for(auto x: v)
{
  s=s+char(x+'a');
}

return s;

}
