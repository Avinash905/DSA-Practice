//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double findMedian(vector<int> array1, vector<int> array2){
        int n=array1.size(),m=array2.size(),start=0,end=n;

        while(start<=end){
            int m1=start+(end-start)/2,m2=(n+m+1)/2-m1;
            
            int mx1=m1==0?INT_MIN:array1[m1-1];
            int mx2=m2==0?INT_MIN:array2[m2-1];
            int mn1=m1==n?INT_MAX:array1[m1];
            int mn2=m2==m?INT_MAX:array2[m2];
            
            if(mx1<=mn2 && mx2<=mn1){
                if((n+m)%2==0)return (max(mx1,mx2)+min(mn1,mn2))/2.0;
                else return max(mx1,mx2);
            }
            else if(mx1>mn2)end=m1-1;
            else start=m1+1;
        }
        return 0;
    }
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int n=array1.size(),m=array2.size();
        
        if(m>=n)return findMedian(array1,array2);
        else return findMedian(array2,array1);
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