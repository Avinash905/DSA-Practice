//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool isValid(int arr[],int N,int D,int mid){
        int weight=0,days=1;
        
        for(int i=0;i<N;i++){
            weight+=arr[i];
            if(weight>mid){
                days++;
                weight=arr[i];
            }
            if(days>D)return false;
        }
        return true;
    }
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int st=0,end=0,ans=0;
        
        for(int i=0;i<N;i++){
            end+=arr[i];
            if(arr[i]>st)st=arr[i];
        }
        
        while(st<=end){
            int mid=st+(end-st)/2;
            
            if(isValid(arr,N,D,mid)){
                ans=mid;
                end=mid-1;
            }
            else st=mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends