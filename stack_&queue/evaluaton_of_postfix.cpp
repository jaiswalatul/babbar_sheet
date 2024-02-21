//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                int op1=st.top();
                st.pop();
                int op2=st.top();
                st.pop();
                switch(s[i]){
                    case '+':
                       st.push(op2+op1);
                       break;
                    case '-':
                       st.push(op2-op1);
                       break;
                    case '*':
                       st.push(op2*op1);
                       break;
                    case '/':
                       st.push(op2/op1);
                }
                
            }
            else{
                st.push(s[i]-'0');
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends