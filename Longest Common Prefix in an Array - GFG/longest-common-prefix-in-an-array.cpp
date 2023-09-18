//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        // TC - O(N*min(arr))
        // SC - O(min(arr))
        string ans="";
        int minIdx=0,mini=INT_MAX;
        for(int i=0;i<N;i++){
            if(arr[i].size()<mini){
                minIdx=i;
                mini=arr[i].size();
            }
        }
        for(int i=0;i<mini;i++){
            char ch=arr[minIdx][i];
            int j=0;
            for(;j<N;j++){
                if(arr[j][i]!=ch)break;
            }
            if(j!=N)break;
            else ans+=ch;
        }
        if(ans=="")return "-1";
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends