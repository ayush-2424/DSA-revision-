#include<bits/stdc++.h>
using namespace std;

void ispair(int arr[],int n,int sum)
{
  unordered_set<int> s;

  for(i=0;i<n;i++)
  {
    if(s.find(sum-arr[i])!=s.end())
    {
      cout<<"YES";
    }
    else
    {
      s.insert(arr[i]);
    }
  }
  cout<<"NO";
}

void pair(int arr[],int n,int sum)
{
  unordered_set<int> s(arr,arr+n);

  for(auto x: s)
  {
    if(s.find(sum-x)!=s.end())
    {
      cout<<"YES";
    }
  }
  cout<<"NO";
}


int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int n = 16;
    int arr_size = sizeof(A) / sizeof(A[0]);

    // Function calling
    ispair(A, arr_size, n);

    return 0;
}
