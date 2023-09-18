//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    // TC - O(n)
	    // SC - O(1)
	    int freq[127]={0};
	    int j=0,n=str.size();
	    
	    for(int i=0;i<n;i++){
	        while(freq[int(str[i])]!=0 && i<n){
	            i++;
	        }
	        if(freq[int(str[i])]==0){
	            freq[int(str[i])]++;
	            swap(str[i],str[j]);
	            j++;
	        }
	    }
	    return str.substr(0,j);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends