//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int key) {
        // Code here
        int st=0,end=N-1,mid=st+(end-st)/2;

        while(st<=end){
            if(A[st]==A[end]){
                st++;
                end--;
            }
            
            if(A[mid]==key)return 1;
            else if(A[st]<=A[mid]){
                if(key>=A[st] && key<A[mid])end=mid-1;
                else st=mid+1;
            }
            else{
                if(key>A[mid] && key<=A[end])st=mid+1;
                else end=mid-1;
            }

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
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends