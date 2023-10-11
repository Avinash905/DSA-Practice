//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int getCount(int arr[], int n, int num1, int num2)
    {
        //Complete the function
        int left=n,right=0;
        for(int i=0;i<n;i++){
            if(arr[i]==num1)left=min(left,i);
            if(arr[i]==num2)right=max(right,i);
        }
        if(left==right)return 0;
        return right-left-1;
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int num1,num2;
	    cin>>num1>>num2;
	    Solution ob;
	    cout << ob.getCount(a, n, num1, num2) <<"\n";
	}
	return 0;
}

// } Driver Code Ends