#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node *prev;

  Node (int x)
  {
    data=x;
    prev=NULL;
    next=NULL;
  }
};

void print(Node *head){
  cout<<"NULL"<<"<->";
  while(head!=NULL)
  {
    cout<<head->data<<"<->";
    head=head->next;
  }
  cout<<"NULL"<<endl;
}

Node *reverse_doubly_ll(Node *head)
{
    Node *curr=head;
    Node *temp=NULL;
    while(curr!=NULL)
    {
      temp=curr->prev;
      curr->prev=curr->next;
      curr->next=temp;
      curr=curr->prev;
    }
    if(temp!=NULL)head=temp->prev;
    return head;
}

int main()
{
  Node *head=new Node(1);
  Node *temp1=new Node(2);
  Node *temp2=new Node(3);
  head->next=temp1;
  temp1->next=temp2;
  temp2->prev=temp1;
  temp1->prev=head;

  print(head);

  print(reverse_doubly_ll(head));



  return 0;


}
