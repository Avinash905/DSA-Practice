//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here
        // TC - O(x)
        // SC - O(1)
        
        long long start=1,end=x/2,ans=1;
        while(start<=end){
           long long mid=start+(end-start)/2;
           
           if(mid==x/mid)return mid;
           else if(mid<x/mid){
               ans=mid;
               start=mid+1;
           }
           else end=mid-1;
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends