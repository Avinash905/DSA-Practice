//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        // Complete the function
        sort(arr,arr+n);
        vector<int> res;
        int count=n,i=0;
        while(i<n){
            int temp=arr[i],j=i;
            while(arr[j]==temp){
                count--;
                j++;
            }
            i=j;
            if(count>0)res.push_back(count);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}
// } Driver Code Ends