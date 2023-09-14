//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        // TC - O(n+m)
        // SC - O(1)
        
        int i=0,j=0,n=array1.size(),m=array2.size(),first,second;
        
        for(int k=0;k<=(n+m)/2;k++){
            first=second;
            if(i<n && j<m){
                if(array1[i]<array2[j]){
                    second=array1[i++];
                }
                else if(array1[i]>=array2[j]){
                    second=array2[j++];
                }
            }
            else if(i<n)second=array1[i++];
            else second=array2[j++];
        }
        
        return (n+m)%2==0?(first+second)/2.0:second;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends