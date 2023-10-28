//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
		
		for(int col=0;col<N;col++){
		    int r=0,c=col;
		    while(c>=0){
		        ans.push_back(A[r][c]);
		        r++;
		        c--;
		    }
		}
		
		for(int row=1;row<N;row++){
		    int r=row,c=N-1;
		    while(r<N){
		        ans.push_back(A[r][c]);
		        r++;
		        c--;
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