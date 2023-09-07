//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        // TC - O(n)
        // SC - O(1)
        int product=1,count=0,zeros=0;
        for(int i=0;i<N;i++){
            if(arr[i]>0)
                count+=(arr[i]-1);
            else if(arr[i]<0){
                count+=(-1-arr[i]);
                product*=-1;
            }
            else{
                count++;
                zeros++;
            }
        }
        
        if(product==1 || zeros>0)return count;
        else return count+2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends