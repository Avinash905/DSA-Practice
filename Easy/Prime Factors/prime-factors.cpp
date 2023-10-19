//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    
	    int arr[N+1]={0};
	    
	    for(int i=2;i<N;i++){
	        if(N%i==0){
	            for(int j=2*i;j<=N;j+=i)if(arr[j]==0)arr[j]=1;
	        }
	        else arr[i]=1;
	    }
	    
	    vector<int> ans;
	    for(int i=2;i<=N;i++){
	        if(arr[i]==0)ans.push_back(i);
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends