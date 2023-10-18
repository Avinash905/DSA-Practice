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
        long long st=1,end=x,mid=st+(end-st)/2,ans=0;
        
        while(st<=end){
            if(mid==x/mid)return mid;
            else if(mid<x/mid){
                ans=mid;
                st=mid+1;
            }
            else end=mid-1;
            
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends