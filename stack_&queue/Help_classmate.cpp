//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int>v;
        v.push_back(-1);
        int j=0;
        for(int i=n-2;i>=0;i--){
            j=i+1;
            while(j<n && arr[i]<=arr[j] ){
                j++;
            }
            if(j==n){
               v.push_back(-1);
              
            }
            else{
                v.push_back(arr[j]);
            }
        }
        reverse(v.begin(), v.end());
        return v;
    } 
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends



