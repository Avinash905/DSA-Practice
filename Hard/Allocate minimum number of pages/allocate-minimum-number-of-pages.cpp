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
        
        int st=0,end=accumulate(A,A+N,0),mid=st+(end-st)/2,ans=0;
        
        while(st<=end){
            int pages=0,students=1;
            for(int i=0;i<N;i++){
                if(A[i]>mid){
                    students=M+1;
                    break;
                }
                pages+=A[i];
                if(pages>mid){
                    students++;
                    pages=A[i];
                }
            }
            
            if(students>M)st=mid+1;
            else{
                ans=mid;
                end=mid-1;
            }
            
            mid=st+(end-st)/2;
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