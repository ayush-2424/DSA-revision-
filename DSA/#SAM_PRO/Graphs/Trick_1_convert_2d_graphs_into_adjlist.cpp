#include<bits/stdc++.h>
using namespace std;

// Function to convert 2D vector graph to adjacency list

unordered_map<int,vector<int>> convert(vector<vector<int>> &graphs)
{
  unordered_map<int,vector<int>> adjList;

  for(int node=0;node<graph.size();node++)
  {
    adjList[node]={};

    for(int x:adj[node])
    {
      adjList[node].push_back(x);
    }
  }
  return adjList;
}
