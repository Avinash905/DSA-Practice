//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> findTriplet(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        vector<int> res = findTriplet(arr, n);
        if(res.size()!=3)cout<<"-1\n";
	    else
	    {
	        sort(res.begin(), res.end());
	        if(res[0]+res[1]==res[2])
	            cout<<"1\n";
	        else
	             cout<<"0\n";
	    }
    }
	return 0;
}

// } Driver Code Ends


// function should return the triplet
// in a vector container defined as "vector<int> result"
// use result.push_back() to insert elements in the 
// container
// if no such triplet is found, 
// return the container result as empty
// Note: container should be contain 3 elements or 0 elements only.
vector<int> findTriplet(int arr[], int n)
{
    // code here
    // 
    vector<int> result;
    sort(arr,arr+n);
    for(int k=n-1;k>=1;k--){
        int i=0,j=k-1;
        while(i<j){
            if(arr[i]+arr[j]==arr[k]){
                return {arr[i],arr[j],arr[k]};
            }
            else if(arr[i]+arr[j]>arr[k])j--;
            else i++;
        }
    }
    return result;
}