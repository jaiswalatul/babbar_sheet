#include<iostream>
using namespace std;


struct node
{
   int data;
   node *next;
      node(int x){
        data=x;
        next=nullptr;
      }
};


struct queue
{
   node *front;
   node *rear;
   int size;
      queue(){
        front=nullptr;
        rear=nullptr;
        size=0;
      }

    void enque(int x){
        
        node *temp=new node(x);
        if(front==nullptr){
            front=rear=temp;
            return;
        }
        else{
            rear->next=temp;
            rear=temp;
            size++;
        }
    } 

    void deque(){
        if(front==nullptr){
            return;
        }
        node *temp=front;
        front=front->next;
        size--;
        if(front==nullptr){
            rear=nullptr;
        }
        delete(temp);
    } 

    int getfront(){
        if(front==nullptr){
            return -1;
        }
        else{
            return front->data;  
        }
    }

    int getrear(){
        if(front ==nullptr){
            return -1;
        }
        return rear->data;
    }

};

int main(){

   queue q;
   q.enque(10);
   q.enque(20);
   q.enque(30);
   q.deque();

   cout<<q.getfront()<<endl;
   cout<<q.getrear()<<endl;

    return 0;
}
