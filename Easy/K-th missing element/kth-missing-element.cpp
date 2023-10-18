//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int a[], int n, int k)
{
    // Complete the function
    // if(a[n-1]-a[0]==n-1)return -1;
    
    int st=0,end=n-1,mid=st+(end-st)/2;
        
    while(st<=end){
        if(a[mid]-(a[0]+mid)<k)st=mid+1;
        else end=mid-1;
        
        mid=st+(end-st)/2;
    }
    
    if(a[0]+end+k>a[n-1])return -1;
    
    return a[0]+k+end;
}