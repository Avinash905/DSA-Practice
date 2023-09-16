//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    // TC - O(n)
	    // SC - O(n)
	    int n=s.size();
	    int lps[n+1]={0};
	    char str[n+1];
	    for(int i=0;i<n;i++){
	        str[i+1]=s[i];
	    }
	    
	    int first=0,second=2;
	    while(second<=n){
	        if(str[first+1]==str[second]){
	            lps[second]=first+1;
	            first++;
	            second++;
	        }
	        else{
	            if(first==0)second++;
	            else{
	                first=lps[first];
	            }
	        }
	    }
	    return lps[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends