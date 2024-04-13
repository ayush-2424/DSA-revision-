#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *next;

  Node(int val)
  {
    data=val;
    next=NULL;
  }
};

// Insert function linked list
Node *insert(Node *head,int val)
{
  Node *curr=head;
  Node *temp=new Node(val);
  while(curr-next!=NULL)
  {
    curr=curr->next;
  }
  curr->next=temp;
}

//print linked list
void print_ll(Node *head)
{
  Node *curr=head;

  while(curr!=NULL)
  {
    cout<<curr->data<<" ";
    curr=curr->next;
  }
}

// write function

int main()
{
  Node *head=NULL;
  head=insert(head,1);
  head=insert(head,2);
  head=insert(head,3);

  return 0;
}
