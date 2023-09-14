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
        int i=0,j=0,k=0,n=array1.size(),m=array2.size();
        queue<int> q;
        while(i<n && j<m){
            if(array1[i]<array2[j]){
                q.push(array1[i++]);
            }
            else if(array1[i]>=array2[j]){
                q.push(array2[j++]);
            }
        }
        while(i<n){
            q.push(array1[i++]);
        }
        while(j<m){
            q.push(array2[j++]);
        }
        while(!q.empty()){
            if((n+m)%2==0 && k==(n+m)/2-1){
                double first=q.front();
                q.pop();
                double second=q.front();
                return (first+second)/2;
            }
            else if((n+m)%2==1 && k==(n+m)/2){
                return q.front();
            }
            q.pop();
            k++;
        }
        return -1;
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