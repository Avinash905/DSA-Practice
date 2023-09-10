//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    // TC - O(n)
    // SC - O(1)
    for(int i=0;i<N-1;i++){
        if(abs(A[i])-1<N-1)A[abs(A[i])-1]*=-1;
    }
    for(int i=0;i<N-1;i++)if(A[i]>0)return i+1;
    return N;
}