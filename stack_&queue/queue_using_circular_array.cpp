#include<iostream>
using namespace std;

struct queue
{
    int cap;
    int size;
    int *arr;
    int front;
        queue(int c){
            cap=c;
            size=0;
            arr=new int [c];
            front=0;
        }

    void enque(int x){
        if(isfull()){
            return ;
        }
        int rear=getrear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }   

    void deque(){
        if(isempty()){
            return ;
        }
        front=(front+1)%cap;
        size--;
    } 
    int getrear(){
        if(isempty()){
            return -1;
        }
        return (front+size-1)%cap;
    }
    int getfront(){
        if(isempty()){
            return -1;
        }
        return arr[front];
    }

    bool isfull(){
        return size>=cap;
    }

    bool isempty(){
        return size==0;
    }
};


int main(){
    queue q(10);

    q.enque(10);
    q.enque(30);
    q.enque(20);

    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    return 0;
}

