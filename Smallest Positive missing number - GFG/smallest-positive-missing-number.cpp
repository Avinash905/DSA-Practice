//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int maxi=*max_element(arr,arr+n)+1;
        if(maxi<=0)return 1;
        
        for(int i=0;i<n;i++){
            if(arr[i]<0)arr[i]=0;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                int ind=arr[i]%maxi-1;
                if(ind<n && ind>=0)arr[ind]+=maxi;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<maxi){
                return i+1;
            }
        }
        return n+1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends