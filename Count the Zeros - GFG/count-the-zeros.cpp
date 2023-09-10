//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int leftIdx(int v[],int x,int n){
        int start=0,end=n-1,ans=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(v[mid]==x){
                ans=mid;
                end=mid-1;
            }
            else if(v[mid]>x)start=mid+1;
        }
        return ans;
    }
    int rightIdx(int v[],int x,int n){
        int start=0,end=n-1,ans=-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(v[mid]==x){
                ans=mid;
                start=mid+1;
            }
            else if(v[mid]>x)start=mid+1;
        }
        return ans;
    }
    int countZeroes(int arr[], int n) {
        // code here
        // TC - O(log(n))
        // SC - O(1)
        return rightIdx(arr,0,n)-leftIdx(arr,0,n)+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends