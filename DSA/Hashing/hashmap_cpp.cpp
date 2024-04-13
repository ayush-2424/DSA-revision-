#include<bits/stdc++.h>
using namespace std;


// unordered_map<int,int> mp;
// unordered_set<int> s(arr,arr+n);



int main()
{
  unordered_map<string,int> mp;

  mp["first"]=1;
  mp["second"]=2;
  mp["third"]=3;

  for(auto x: mp)
  {
    cout<<x.first<<" "<<x.second<<endl;
  }


return 0;
}
