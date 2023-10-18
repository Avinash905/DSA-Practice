//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int first(int arr[],int n,int x){
        int st=0,end=n-1,mid=st+(end-st)/2,ans=-1;
        
        while(st<=end){
            if(arr[mid]==x){
                ans=mid;
                end=mid-1;
            }
            else if(arr[mid]>x)end=mid-1;
            else st=mid+1;
            
            mid=st+(end-st)/2;
        }
        return ans;
    }
    int last(int arr[],int n,int x){
        int st=0,end=n-1,mid=st+(end-st)/2,ans=-1;
        
        while(st<=end){
            if(arr[mid]==x){
                ans=mid;
                st=mid+1;
            }
            else if(arr[mid]>x)end=mid-1;
            else st=mid+1;
            
            mid=st+(end-st)/2;
        }
        return ans;
    }
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int st=first(arr,n,x);
	    int end=last(arr,n,x);
	    
	    if(st==-1 || end==-1)return 0;
	    
	    return end-st+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends