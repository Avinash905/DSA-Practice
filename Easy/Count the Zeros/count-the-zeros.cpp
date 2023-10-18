//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int first(int arr[],int n,int x){
        int st=0,end=n-1,mid=st+(end-st)/2,ans=-1;
        
        while(st<=end){
            if(arr[mid]==x){
                ans=mid;
                end=mid-1;
            }
            else if(arr[mid]>x)st=mid+1;
            else end=mid-1;
            
            mid=st+(end-st)/2;
        }
        return ans;
    }
    int countZeroes(int arr[], int n) {
        // code here
        int st=first(arr,n,0);
        
        if(st==-1)return 0;
        
        return n-st;
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