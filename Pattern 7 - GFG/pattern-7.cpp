//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int row=1;row<=n;row++){
            // print spaces
            for(int col=1;col<=n-row;col++){
                cout<<" ";
            }
            // print stars
            for(int col=1;col<=2*row-1;col++){
                cout<<"*";
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends