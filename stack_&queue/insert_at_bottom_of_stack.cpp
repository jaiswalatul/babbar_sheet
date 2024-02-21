#include<iostream>
#include<stack>
using namespace std;
// using recursion

void insert_bottom(stack<int>&s,int a){

if(s.size()==0){
    
    s.push(a);
   
    return;
}

int x=s.top();
s.pop();

   insert_bottom(s,a);
   s.push(x);


}



int main(){

    stack<int>s;
    int a=0;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

     insert_bottom(s,a);
    while(s.empty()==false){
        cout<<"The Element is:"<<s.top()<<endl;
        s.pop();
    }
    

    return 0;
}