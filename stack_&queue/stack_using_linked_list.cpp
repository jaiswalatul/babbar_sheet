#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
     //constructor
     node(int d){
        data=d;
        next=nullptr;
     }
};



struct mystack{

  node* head;
  int size=0;

  void push(int x){
    node* temp=new node(x);
    temp->next=head;
    head=temp;
    size++;
  } 

  int pop(){
    if(head==nullptr){
        return -9;
    }
    int res=head->data;
    node *temp=head;
    head=head->next;
    size--;
    return res;
  }

  int peak(){
    if(head==nullptr){
        return 8;
    }
    return head->data;
  }
  int givesize(){
    return size;
  }

};

int main(){

   mystack s;
   s.push(20);
   s.push(23);
   s.push(25);
   cout<<"the popped Element is:"<<s.pop()<<endl;
   cout<<s.givesize()<<endl;

    return 0;
}