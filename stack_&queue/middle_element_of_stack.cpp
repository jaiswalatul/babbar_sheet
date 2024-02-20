#include<iostream>
#include<stack>
using namespace std;

void middle_ele(stack<int>s,int size,int current){

   if(current ==size/2){
       cout<<"answer is:"<<s.top()<<endl;
       return;
   }
    
    s.pop();
    current+=1;
    
    middle_ele(s,size,current);
}

int main(){

   stack<int>s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
   int size=s.size();
   int current=0;

   // recursive method
   middle_ele(s,size,current);

    return 0;
}