//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        // TC - O(n)
    	// SC - O(1)
    	int n=arr.size();
        vector<int> count(26,0);
    	string ans=arr;
 
    	for(int i=0;i<n;i++){
    		count[arr[i]-'a']++;
    	}
    	for(int i=1;i<count.size();i++){
    		count[i]+=count[i-1];
    	}
    	for(int i=n-1;i>=0;i--){
    		ans[--count[arr[i]-'a']]=arr[i];
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
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends