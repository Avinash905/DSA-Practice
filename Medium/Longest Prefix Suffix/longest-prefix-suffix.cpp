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
	    int n=s.size(),lpsArr[n+1]={0};
	    string str=" ";
	    
	    for(int i=0;i<n;i++)str+=s[i];
	    
	    int first=0,second=2;
	    while(second<=n){
	        if(str[first+1]!=str[second]){
	            if(first==0)second++;
	            else first=lpsArr[first];
	        }
	        else{
	            lpsArr[second]=first+1;
	            first++,second++;
	        }
	    }
	    
	    return lpsArr[n];
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