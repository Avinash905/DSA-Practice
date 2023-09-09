//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        // TC - O(log(n))
        // SC - O(1)
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])return arr[mid];
            
            if(arr[mid]==arr[mid+1]){
                if((mid)%2==0){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else{
                if((mid+1)%2==0){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends