//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *A, int n, int K)
    {
        // your code here
        int i=0,j=0;
        deque<int> q;
        vector<int> ans;
        
        while(j<n){
            while(!q.empty() && q.back()<A[j]){
                q.pop_back();
            }
            q.push_back(A[j]);
            
            if(j-i+1<K)j++;
            else{
                ans.push_back(q.front());
                if(A[i]==q.front())q.pop_front();
                j++;
                i++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends