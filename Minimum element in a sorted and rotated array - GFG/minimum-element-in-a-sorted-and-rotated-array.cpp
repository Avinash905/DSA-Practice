//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        // TC - O(log(n))
        // SC - O(1)
        int start=0,end=n-1,ans=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            // left sorted
            if(arr[start]<=arr[mid]){
                ans=min(ans,arr[start]);
                start=mid+1;
            }
            else{
                ans=min(ans,arr[mid]);
                end=mid-1;
            }
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends