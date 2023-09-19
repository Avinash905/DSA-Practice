//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        // TC - O(n^2)
        // SC - O(1)
        for(int i=1;i<2*n;i++){
            for(int j=1;j<2*n;j++){
                cout<<max(abs(n-i)+1,abs(n-j)+1)<<" ";
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends