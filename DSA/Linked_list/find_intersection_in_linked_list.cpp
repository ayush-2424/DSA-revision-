
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

Node *find_intersection(Node *head1,Node *head2)
{
  int c1=0,c2=0;
  Node *curr1=head1,*curr2=head2;

  while(curr1!=NULL)
  {
    c1++;
    curr1=curr1->next;
  }

  while(curr2!=NULL)
  {
    c2++;
    curr2=curr2->next;
  }

  curr1=head1;
  curr2=head2;

  int n=abs(c1-c2);

  if(c1>c2)
  {
    while(n--)
    {
      curr1=curr1->next;
    }
  }
  else
  {
    while(n--)
    {
      curr2=curr2->next;
    }
  }

  while(curr1!=NULL && curr2!=NULL)
  {
    if(curr1==curr2)
    {
      return curr1->data;
    }
    curr1=curr1->next;
    curr2=curr2->next;
  }

  return NULL;
}
