#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node *random;

  Node(int val)
  {
    data=val;
    next=NULL;
    random=NULL;
  }
};

Node *clone_map(Node *head)
{
  unorder_map<Node*,Node*> mp;
  Node *curr;

  for(curr=head;curr!=NULL;curr=curr->next)
  {
    mp[curr]=new Node(curr->next);
  }

  for(curr=head;curr!=NULL;curr=curr->next)
  {
    Node *clone=mp[curr];
    clone->next=mp[curr->next];
    clone->random=mp[curr->random];
  }
  Node *head2=mp[head];

  return head2;
}
