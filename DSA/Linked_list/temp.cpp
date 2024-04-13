#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;

  Node(int x)
  {
    data=x;
    next=NULL;
  }
};

Node *insert(Node * head,int x)
{
  Node *curr=head;
  Node *temp=new Node(x);
  if(curr==NULL)
  {
    return temp;
  }
  while(curr->next!=NULL)
  {
    curr=curr->next;
  }
  curr->next=temp;
  return head;
}

void print(Node *temp)
{
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

int main()
{
  Node *head=NULL;
  head=insert(head,3);
  head=insert(head,2);
  head=insert(head,1);
  print(head);
  return 0;
}
