//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  bool isValid(int A[],int N,int M,long long mid){
        long long length=0,painters=1;
        for(int i=0;i<N;i++){
            length+=A[i];
            if(length>mid){
                painters++;
                length=A[i];
            }
            if(painters>M)return false;
        }
        return true;
    }
    long long minTime(int A[], int N, int M)
    {
        // code here
        // return minimum time
        // TC - O(Nlog(sum(array)))
        // SC - O(1)
        
        long long start=0,end=0,ans=0;
        for(int i=0;i<N;i++){
            end+=A[i];
            if(A[i]>start)start=A[i];
        }
        
        while(start<=end){
            long long mid=start+(end-start)/2;
            
            if(isValid(A,N,M,mid)){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
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