#include<bits/stdc++.h>
using namespace std;


struct Node{
  int data;
  Node *next=NULL;

  Node(int x){
    data=x;
    next=NULL;
  }
};


// Removing cycle in Linked list detect_loop

void remove_loop_linked_list(Node *head)
{
  Node *slow=head,*fast=head;
  while(fast!=NULL && fast->next!=NULL)
  {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    {
      break;
    }
  }
  if(slow!=fast)
  {
    return ;
  }
  slow=head;

  while(slow->next!=fast->next)
  {
    slow=slow->next;
    fast=fast->next
  }
  fast->next=NULL;
}


// detect loop using FYLOD cycle detection
bool detect_loop(Node *head)
{
  Node *slow=head,*fast=head;
  while(fast!=NULL && fast->next!=NULL)
  {
    slow=slow->next;
    fast=fast->next->next;

    if(slow==fast)
    {
      return true;
    }
  }
  return false;
}

int main()
{

}
