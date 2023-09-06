//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N)return -1;
        
        int s=A[0],e=0,ans=0;
        for(int i=0;i<N;i++){
            e+=A[i];
            if(A[i]>s)s=A[i];
        }
        int mid=s+(e-s)/2;
        
        while(s<=e){
            int count=1,sum=0;
            for(int j=0;j<N;j++){
                if(A[j]>mid){
                    count=M+1;
                    break;
                }
                sum+=A[j];
                if(sum>mid){
                    count++;
                    sum=A[j];
                }
            }
            if(count<=M){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
            
            mid=s+(e-s)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends