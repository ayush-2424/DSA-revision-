#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *next;

  int Node(int val)
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

Node *reverse_k_nodes(Node *head,int k)
{
  if(head==NULL)
  {
    return NULL;
  }

  Node *curr=head,*prev_first=NULL;
  bool isfirstpass=true;

  while(curr!=NULL)
  {
    Node *first=curr,*prev=NULL,*temp=NULL;
    int c=0;
    while(curr!=NULL && c<k)
    {
      temp=curr->next;
      curr->next=prev;
      pre=curr;
      curr=temp;
      c++;
    }
    if(isfirstpass)
    {
      head=prev;
      isfirstpass=false;
    }
    else
    {
      //first->next=prev;
      prev_first->next=prev;
    }
    prev_first=first;
  }
  return head;
}

int main()
{
  Node *head=NULL;
  head=insert(head,1);
  head=insert(head,2);
  head=insert(head,3);

  return 0;
}
