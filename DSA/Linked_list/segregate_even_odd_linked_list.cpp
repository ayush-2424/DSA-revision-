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


Node *seperate_even_odd(Node *head)
{
  Node *os=NULL,*oe=NULL,*es=NULL,*ee=NULL;
  Node *curr=head;

  for(curr=head;curr!=NULL;curr=curr->next)
  {
    int x=curr->data;

    if(x%2==0)
    {
      if(es==NULL)
      {
        es=curr;
        ee=curr;
      }
      else
      {
        ee->next=curr;
        ee=ee->next;
      }
    }
    else
    {
      if(os==NULL)
      {
        os=NULL;
        oe=NULL;
      }
      else
      {
        oe->next=curr;
        oe=oe->next;
      }
    }
  }


  if(os==NULL || es==NULL)
  {
    return head;
  }
  es->next=os;
  oe->next=NULL;

  return es;
}
