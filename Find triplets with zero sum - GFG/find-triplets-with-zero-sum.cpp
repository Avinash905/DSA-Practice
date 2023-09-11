//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        // TC - O(n^2)
        // SC - O(1)
        // try using sorting
        sort(arr,arr+n);
        
        for(int i=0;i<n-1;i++){
            int j=i+1,k=n-1;
            int reqSum=0-arr[i];
            while(j<k){
                if(arr[j]+arr[k]==reqSum)return true;
                else if(arr[j]+arr[k]>reqSum)k--;
                else j++;
            }
        }
        
        // for(int i=0;i<n-1;i++){
        //     int reqSum=0-arr[i],sum=0;
        //     unordered_map<int,int> mp;
        //     for(int j=i+1;j<n;j++){
        //         sum+=arr[j];
        //         if(sum==reqSum)return 1;
        //         if(mp.find(sum-reqSum)!=mp.end())return 1;
        //         mp[sum]=1;
        //     }
        // }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends