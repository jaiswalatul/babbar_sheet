//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    void insert_bottom(stack<int>&s,int &i,int a){
        if(s.size()==i){
          s.push(a);
          i++;
          return;
        }

        int x=s.top();
         s.pop();

         insert_bottom(s,i,a);
         s.push(x);
    }

    void Reverse(stack<int> &st){
        int i=0;
        while(i!=st.size()-1){
            insert_bottom(st,i,st.top());
            st.pop();
        }
        
    
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends