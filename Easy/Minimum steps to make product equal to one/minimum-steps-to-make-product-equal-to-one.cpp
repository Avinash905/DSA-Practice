//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        int cnt=0,sum=0,neg=0;
        
        for(int i=0;i<N;i++){
            if(arr[i]==0){
                sum++;
                cnt++;
            }
            else if(arr[i]>0)sum+=arr[i]-1;
            else{
                sum+=abs(arr[i])-1;
                neg=!neg;
            }
        }
        if(neg && cnt)return sum;
        else if(neg && !cnt)return sum+2;
        
        return sum;
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