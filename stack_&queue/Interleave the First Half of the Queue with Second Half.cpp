//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int>v;
        int size=q.size();
        for(int i=0;i<size/2;i++){
            v.push_back(q.front());
            q.pop();
        }
        
        reverse(v.begin(),v.end());
      
      
        
        while(v.size()!=0){
            q.push(v.back());
            v.pop_back();
           int temp=q.front();
            q.pop();
            q.push(temp);
        }
        
        while(q.size()!=0){
            v.push_back(q.front());
            q.pop();
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        queue<int>q1;
        vector<int>v;
        
        int size=q.size();
        for(int i=0;i<size/2;i++){
            q1.push(q.front());
            q.pop();
        }
        
        
        
        while(q1.size()!=0){
           q.push(q1.front());
           q1.pop();
           q.push(q.front());
           q.pop();
        }
        
        while(q.size()!=0){
            v.push_back(q.front());
            q.pop();
        }
        
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends