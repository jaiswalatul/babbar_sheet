#include<iostream>
#include <vector>
using namespace std;

vector<int>v;
void push(int x){
    v.push_back(x);
}
int pop(){
    int res=v.back();
    v.pop_back();
    return res;
}

int peak(){
    return v.back();
}
int size(){
    return v.size();
}

int main(){
    push(20);
    push(30);
    push(40);
    cout<<"the popped element is:"<<pop()<<endl;
    cout<<size()<<endl;
    return 0;
}