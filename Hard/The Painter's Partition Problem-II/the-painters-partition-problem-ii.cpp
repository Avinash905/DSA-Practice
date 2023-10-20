//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int A[], int n, int k)
    {
        // code here
        // return minimum time
        long long st=0,end=0,ans=0;
        
        for(int i=0;i<n;i++){
            end+=A[i];
            if(A[i]>st)st=A[i];
        }
        
        long long mid=st+(end-st)/2;
        
        while(st<=end){
            long long length=0,painters=1;
            
            for(int i=0;i<n;i++){
                length+=A[i];
                if(length>mid){
                    painters++;
                    length=A[i];
                }
            }
            
            if(painters>k)st=mid+1;
            else{
                ans=mid;
                end=mid-1;
            }
            
            mid=st+(end-st)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends