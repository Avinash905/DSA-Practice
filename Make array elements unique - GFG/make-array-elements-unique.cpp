//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        // TC - O(Nlog(N))
	    // SC - O(1)
	    sort(arr.begin(),arr.end());
	    long long count=0;
	    for(int i=1;i<N;i++){
	        if(arr[i]<=arr[i-1]){
	            int diff=arr[i-1]-arr[i]+1;
	            count+=diff;
	            arr[i]+=diff;
	        }
	    }
	    return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends