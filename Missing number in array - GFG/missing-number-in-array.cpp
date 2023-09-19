//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& arr, int n) {
        // Your code goes here
        // TC - O(n)
        // SC - O(1)
        for(int i=0;i<n-1;i++){
            if(abs(arr[i])<n)arr[abs(arr[i])-1]*=-1;
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]>0)return i+1;
        }
        return n;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends