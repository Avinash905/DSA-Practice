//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    // TC - O(n)
    // SC - O(1)
    
    // sort and optimise to nlogn
    
    long long ans=0,st=0,end=len-1,length=0,breadth=0;
    while(st<end){
        length=end-st;
        if(A[st]>A[end])breadth=A[end--];
        else breadth=A[st++];
        
        ans=max(ans,length*breadth);
    }
    return ans;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends