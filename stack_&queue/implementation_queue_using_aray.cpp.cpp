#include<iostream>
using namespace std;

struct queue{
  int cap;
  int size;
  int *arr;
     queue(int c){
        cap=c;
        size=0;
        arr=new int[c];
     }


     void enque(int x){
        if(isfull()){
            return ;
        }
        arr[size]=x;
        size++;
     }

    void  deque(){
        if(isempty()){
            return ;
        }
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }

    bool isfull(){
        return size>=cap;
    }
    bool isempty(){
        return size==0;
    }
    int getfront(){
        if(isempty()){
            return -1;
        }
        return arr[0];
    }
    int getrear(){
        if(isempty()){
            return -1;
        }
        return arr[size-1];
    }

};


int main(){

   queue q(10);
   q.enque(10);
   q.enque(20);
   q.enque(30);
   q.enque(40);

    q.deque();
   cout<<"this is the front element:"<<q.getfront()<<endl;
   cout<<"this is the rear element:"<<q.getrear()<<endl;

    return 0;
}