//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   
   stack<int>temp;
   
   int y=0;
   
   while(s.size()!=0){
       y=s.top();
       
       while(temp.size()!=0 ){
           
          if(temp.top()>y){
              s.push(temp.top());
              temp.pop();
          }
          else{
              break;
          }
       }
    
    temp.push(y);
    
    while(s.top()!=y){
        temp.push(s.top());
        s.pop();
    }
    s.pop();
   }
   
   
   
   
   
   while(temp.size()!=0){
       cout<<temp.top()<<" ";
       temp.pop();
   }
}