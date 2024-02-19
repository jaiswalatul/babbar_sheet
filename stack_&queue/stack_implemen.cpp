#include<iostream>
using namespace std;

struct mystack{

  int *arr;
  int top;
  int cap;
    mystack(int c){
        cap=c;
        top=-1;
        arr=new int[cap];
    } //constructir

    void push(int x){
        if(top==cap){
            cout<<"overflow"<<endl;
        }
        else{
               top++;
        arr[top]=x;
        }
       
    }

    int pop(){

        if(top==-1){
            cout<<"underflow"<<endl;
            return 0 ;
        }
        else{
                int res=arr[top];
        top--;
        return res;
        }
        
    }

    int peak(){
        return arr[top];
    }

    int size(){
        return top+1;
    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    mystack s(5);// This is a constructor
    s.push(8);
    s.push(9);
    s.push(15);

    
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.isempty()<<endl;
    return 0;
}