//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int N) {
        // code here
        int st=1,end=N,mid=st+(end-st)/2,ans=0;
        
        while(st<=end){
            if(mid*mid==N/mid)return mid;
            else if(mid*mid<N/mid){
                ans=mid;
                st=mid+1;
            }
            else end=mid-1;
            
            mid=st+(end-st)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends