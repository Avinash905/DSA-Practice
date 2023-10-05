//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        // TC - O(N)
        // SC - O(N)
        int j=0,ans=0,sum=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        
        while(j<N){
            sum+=A[j];
            if(mp.find(sum-K)!=mp.end()){
                ans=max(ans,j-mp[sum-K]);
            }
            if(mp.find(sum)==mp.end())mp[sum]=j;
            j++;
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends