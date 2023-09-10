//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        // TC - O(n+m)
        // SC - O(n)
        int i=0,j=0;
        vector<int> ans;
        while(i<n && j<m){
            while(ans.size()>0 && i<n && ans[ans.size()-1]==arr1[i])i++;
            while(ans.size()>0 && j<m && ans[ans.size()-1]==arr2[j])j++;
            
            if(i<n && j<m && arr1[i]<arr2[j])ans.push_back(arr1[i++]);
            else if(i<n && j<m && arr1[i]>arr2[j])ans.push_back(arr2[j++]);
            else if(i<n && j<m && arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        while(i<n){
            if(ans.size()>0 && ans[ans.size()-1]==arr1[i])i++;
            else ans.push_back(arr1[i++]);
        }
        while(j<m){
            if(ans.size()>0 && ans[ans.size()-1]==arr2[j])j++;
            else ans.push_back(arr2[j++]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends