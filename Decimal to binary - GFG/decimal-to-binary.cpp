//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    // your code here
    // TC - O()
    // SC - O(1)
    int ans=0,count=0;
    while(N){
        int rem=N%2;
        ans+=pow(10,count)*rem;
        count++;
        N=N/2;
    }
    cout<<ans;
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends