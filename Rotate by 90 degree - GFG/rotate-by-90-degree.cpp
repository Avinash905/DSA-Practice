//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


// } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    // TC - O(n^2)
    // SC - O(1)
    int n=matrix.size();
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(col>=row)swap(matrix[row][col],matrix[col][row]);
        }
    }
    for(int row=0;row<n/2;row++){
        for(int col=0;col<n;col++){
            swap(matrix[row][col],matrix[n-row-1][col]);
        }
    }
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


// } Driver Code Ends