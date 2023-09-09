//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long findPower(int x,int n){
	    return pow(x,n);
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    // TC - O(log(n)*log(m))
        // SC - O(1)
        
        if(m==1)return 1;
        if(n==1)return m;
        
        int start=1,end=2;
        
        while(findPower(end,n)<m){
            start=end;
            end=end*2;
        }
        
        while(start<=end){
           int mid=start+(end-start)/2;
           long long power=findPower(mid,n);
        //   cout<<power;
           if(power==m)return mid;
           else if(power<m)start=mid+1;
           else end=mid-1;
        }
        return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends