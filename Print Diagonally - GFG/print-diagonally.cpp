//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		// TC - O(N^2)
        // SC - O(1)
        vector<int> ans;

        for(int row=0;row<N;row++){
            for(int col=row;col<N;col++){
            int tempRow=row,tempCol=col;
            while(tempRow<N && tempCol>=0){
                if(A[tempRow][tempCol]<0)break;
                ans.push_back(A[tempRow][tempCol]);
                A[tempRow][tempCol]=-1;
                tempRow++;
                tempCol--;
            }
        }
        }
        return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends