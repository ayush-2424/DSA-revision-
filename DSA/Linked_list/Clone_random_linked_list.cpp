#include<bits/stdc++.h>
using namespace std;

struct Node{
  int val;
  Node *next;
  Node *random;
  Node(int x)
  {
    val=x;
    next=NULL;
    random=NULL;
  }
};

Node Clone_random_hashing(Node *head){
  unordered_map<Node*,Node*> mp;
  for(Node *curr=head;curr!=NULL;curr=curr->next){
    mp[curr]=new Node(curr->val);
  }

  for(Node *curr=head;curr!=NULL;curr=curr->next){
    Node *clone=mp[curr];

    clone->next=mp[curr->next];
    clone->random=mp[curr->random];
  }

  return mp[head];
}

Node Clone_random_using_eff(Node *head){

  // Add clone node
  Node *h1=head;
  while(h1!=NULL){
    Node *next=h1->next;
    curr->next=new Node(curr->val);
    curr->next->next=next;
    curr=next;
  }

  // Add random in linked list
  for(Node *curr=head;curr!=NULL;curr=curr->next){
    Node *clone=curr->next;
    clone->random=(curr->random!=NULL)?curr->random->next:NULL;
  }

 // sepreate clone node
  Node *h2=h1->next;
  Node *clone=h2;
  for(Node *curr=head;curr!=NULL;curr=curr->next){
    curr->next=curr->next->next;
    clone->next=clone->next?clone->next->next:NULL;
    clone=clone->next;
  }
  return h2l
}

Node *clone_using_one_loop(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node *curr1=head;
    while(curr!=NULL){
        Node *next=curr->next;
        curr->next=new Node(curr->val);
        curr->next->next=next;
        curr=next;
    }

    Node *curr2=head;
    while(curr2!=NULL){
        if(curr2->random!=NULL){
            curr2->next->random=curr2->random->next;
        }
        curr2=curr2->next->next;
    }

    Node *curr3=head;
    Node *clonehead=head->next;
    Node *clonecurr=head->next;
    while(clonecurr->next!=NULL){
        curr3->next=curr3->next->next;
        clonecurr->next=clonecurr->next->next;
        clonecurr=clonecurr->next->next;
        curr3=curr3->next->next;
    }

    clonecurr->next=NULL;
    curr3->next=NULL;

    return clonehead;
}

int main(){

}
