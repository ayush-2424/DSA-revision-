#include<bits/stdc++.h>

struct Node{
  int data;
  Node *next;

  Node(int x)
  {
    data=x;
    next=NULL;
  }
};

// Only work when pointer is not pointing at last node.
Void delete_pointer_node(Node *point)
{
  Node *temp=point->next;
  point->data=temp->data;
  point->next=temp->next;
  delete(temp);
}
