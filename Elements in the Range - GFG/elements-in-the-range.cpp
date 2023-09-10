//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		// TC - O(n)
        // SC - O(1)
        if(n<B-A+1) return false;
        
        for(int i=0;i<n;i++){
            if(abs(arr[i])>=A && abs(arr[i])<=B && arr[abs(arr[i])-A]>0)arr[abs(arr[i])-A]*=-1;
        }
        int count=0;
        for(int i=0;i<=B-A && i<n;i++){
            if(arr[i]<0)count++;
            else false;
        }
        return count==(B-A+1);
	}
};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends