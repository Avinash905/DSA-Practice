//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int isPerfectSquare(long long int n){
        // code here
        long long st=1,end=n,mid=st+(end-st)/2;

        while(st<=end){
            long long square=mid*mid;
            
            if(square==n)return 1;
            else if(square<n)st=mid+1;
            else end=mid-1;

            mid=st+(end-st)/2;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.isPerfectSquare(n) << endl;
    }
    return 0;
}

// } Driver Code Ends