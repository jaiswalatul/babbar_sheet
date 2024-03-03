//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isStackPermutation(int n,vector<int> &a,vector<int> &b){
        
        stack<int>s;
        int i=0;
        int j=0;
        
       while(i<n && j<n){
           s.push(a[i]);
            
            while(s.size()!=0 && b[j]==s.top()){
                s.pop();
                j++;
               
            }
            i++;
            
       }
    //   if(b[j]==s.top()){
    //       s.pop();
    //       j++;
    //   }
      
       if(s.size()==0){
           return 1;
       }
       return 0;
        
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.isStackPermutation(n,a,b)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends