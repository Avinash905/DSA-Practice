//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isValid(int N, int arr[], int K,int mid){
        int sum=0,count=1;
        
        for(int i=0;i<N;i++){
            sum+=arr[i];
            
            if(sum>mid){
                count++;
                sum=arr[i];
            }
            
            if(count>K)return false;
        }
        return true;
    }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int st=0,end=0,ans=0;
        
        for(int i=0;i<N;i++){
            end+=arr[i];
            if(arr[i]>st)st=arr[i];
        }
        
        while(st<=end){
            int mid=st+(end-st)/2;
            
            if(isValid(N,arr,K,mid)){
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