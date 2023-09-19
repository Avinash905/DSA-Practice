//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    // TC - O(n)
        // SC - O(1)
        int first=0,second=-1;
        
        for(int i=0;i<n;i++){
             if(arr[first]<arr[i]){
                 second=first;
                 first=i;
             }
             else if(arr[first]>arr[i]){
                 if(arr[second]<arr[i] || second==-1)second=i;
             }
        }
        if(second==-1)return -1;
        return arr[second];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends