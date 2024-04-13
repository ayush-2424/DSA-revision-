#include<bits/stdc++.h>
using namespace std;


struct Node{
  int data;
  Node *next;

  Node(int x)
  {
    data=x;
    next=NULL;
  }
};


bool detect_loop(Node *head)
{
  unorder_set<Node*> s;
  while(head!=NULL)
  {
    if(s.find(head)!=s.end())
    {
      return true;
    }
    head=head->next;
  }
  return false;
}

int main()
{

  return 0;
}
