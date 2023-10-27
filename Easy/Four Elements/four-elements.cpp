//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int A[], int n, int X)  
{
    sort(A,A+n);
    
    for(int a=3;a<n;a++){
        for(int z=2;z<a;z++){
            int i=0,j=z-1;
            
            while(i<j){
                int sum=X-(A[z]+A[a]);
                
                if(A[i]+A[j]==sum)return 1;
                else if(A[i]+A[j]>sum)j--;
                else i++;
            }
        }
    }
    return 0;
}