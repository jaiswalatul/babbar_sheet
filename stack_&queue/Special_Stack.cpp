//{ Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
// } Driver Code Ends

stack<int>as;
void push(stack<int>& s, int a){
	// Your code goes here
	if(s.empty()){
	    s.push(a);
	    as.push(a);
	}
	else{
	    s.push(a);
	    if(as.top()>=a){
	        as.push(a);
	    }
	}
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
  return s.size()>=n;	
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.size()==0;
}

int pop(stack<int>& s){
	// Your code goes here
	if(as.top()==s.top()){
	    as.pop();
	    s.pop();
	}
	else{
	    s.pop();
	}
}

int getMin(stack<int>& s){
	// Your code goes here
	return as.top();
}