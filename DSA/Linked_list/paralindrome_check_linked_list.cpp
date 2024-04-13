#include<bits/stdc++.h>
using namespace std;


struct Node{
  char val;
  Node *next;

  Node(int x){
    val=x;
    next=NULL;
  }
};

bool check_palindrome(Node *head){
  Node *curr=head;
  stack<char> s;
  for(curr=head;curr!=NULL;curr=curr->next){
    s.push(curr->val);
    curr=curr->next;
  }

  for(curr=head;curr!=NULL;curr=curr->next){
    if(s.top()!=curr->val && s.empty()==false){
      return false;
    }
    s.pop();
    curr=curr->next;
  }
 return true;
  }
}

int main(){

  bool ans=check_palindrome(head);
  return 0;
}
