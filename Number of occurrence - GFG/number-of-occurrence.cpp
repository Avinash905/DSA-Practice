//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int firstIdx(int arr[], int n , int x){
    	// TC - O(log(n))
    	// SC - O(1)
    	int start=0,end=n-1,ans=-1;
    	while(start<=end){
    		int mid=start+(end-start)/2;
    		if(arr[mid]==x){
    		    ans=mid;
    			end=mid-1;
    		}
    		else if(arr[mid]>x)end=mid-1;
    		else start=mid+1;
    	}
    	return ans;	
    }
    int lastIdx(int arr[], int n , int x){
    	// TC - O(log(n))
    	// SC - O(1)
    	int start=0,end=n-1,ans=-1;
    	while(start<=end){
    		int mid=start+(end-start)/2;
    		if(arr[mid]==x){
    		    ans=mid;
    			start=mid+1;
    		}
    		else if(arr[mid]>x)end=mid-1;
    		else start=mid+1;
    	}
    	return ans;	
    }
	int count(int arr[], int n, int x) {
	    // code here
	    // TC - O(log(n))
    	// SC - O(1)
    	int first=firstIdx(arr,n,x);
    	int last=lastIdx(arr,n,x);
    	if(first!=-1 && last!=-1)return last-first+1;
	    return 0;
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