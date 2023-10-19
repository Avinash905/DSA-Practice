//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        if(arr[0]<arr[n-1])return arr[0];

        int st=0,end=n-1,mid=st+(end-st)/2,ans=INT_MAX;

        while(st<=end){
            // if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1])return mid;
            // cout<<arr[mid]<<endl;
            if(arr[st]<=arr[mid]){
                ans=min(ans,arr[st]);
                st=mid+1;
            }
            else{
                ans=min(ans,arr[mid]);
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