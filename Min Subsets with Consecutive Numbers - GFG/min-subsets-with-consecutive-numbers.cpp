//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int numofsubset(int arr[], int n)
    {
        // Your code goes here
        sort(arr,arr+n);
        
        int count=0,i=0;
        while(i<n){
            int temp=arr[i];
            while(temp+1==arr[i+1]){
                i++;
                temp++;
            }
            i++;
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
// Driven Program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n+1];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        Solution ob;
	    cout << ob.numofsubset(arr, n) << endl;
	}
	return 0;
}

// } Driver Code Ends