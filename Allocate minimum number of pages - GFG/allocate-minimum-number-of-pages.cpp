//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isValid(int A[],int N,int M,int mid){
        int pages=0,students=1;
        for(int i=0;i<N;i++){
            pages+=A[i];
            if(pages>mid){
                students++;
                pages=A[i];
            }
            if(students>M)return false;
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        // TC - O(Nlog(sum(array)))
        // SC - O(1)
        
        if(M>N)return -1;
        
        int start=0,end=0,ans=0;
        for(int i=0;i<N;i++){
            end+=A[i];
            start=max(A[i],start);
        }
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(isValid(A,N,M,mid)){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
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