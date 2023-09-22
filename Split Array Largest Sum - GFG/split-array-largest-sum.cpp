//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int check(int arr[],int N,int K,int mid){
        int sum=0,splits=1;
        for(int i=0;i<N;i++){
            if(arr[i]>mid)return false;
            sum+=arr[i];
            if(sum>mid){
                splits++;
                sum=arr[i];
            }
        }
        if(splits<=K)return true;
        return false;
    }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int start=1,end=accumulate(arr,arr+N,0),ans=0;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(check(arr,N,K,mid)){
                ans=mid;
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends