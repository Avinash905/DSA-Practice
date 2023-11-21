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
	    int n=s.size(),lpsArr[n]={0},pre=0,suf=1;
	    
	    while(suf<n){
	        if(s[pre]==s[suf]){
	            lpsArr[suf]=pre+1;
	            pre++,suf++;
	        }
	        else{
	            if(pre==0)lpsArr[suf++]=0;
	            else pre=lpsArr[pre-1];
	        }
	    }
	    
	    return lpsArr[n-1];
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