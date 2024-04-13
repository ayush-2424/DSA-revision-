#include<bits/stdc++.h>
using namespace std;


struct Node{

  int data;
  Node *next;

  Node (int x)
  {
    data=x;
    next=NULL;
  }
};

Node *delete_node_at_first(Node *head)
{
  if(head==NULL)
  {
    return NULL;
  }
  Node *curr=head;
  head=head->next;
  delete(curr);

  return head;
}

Node *delete_at_last(Node *head)
{
  if(head==NULL)
  {
    return NULL;
  }
  Node *temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  Node *last=temp->next;
  temp->next=NULL;

  delete(last);

  return head;
}

Void print(Node *head)
{
  while(head!=NULL)
  {
    cout<<head->next<<" ";

    head=head->next;
  }
}

int main()
{
  Node *head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);
  head->next->next->next=new Node(4);

  Node *final=delete_node_at_first(head);

  print(head);

  return 0;
}
