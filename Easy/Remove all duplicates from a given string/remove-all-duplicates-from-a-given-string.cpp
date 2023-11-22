//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    int i=0,j=0;
	    unordered_map<char,int> mp;
	    
	    while(j<str.size()){
	        while(j<str.size() && mp.find(str[j])!=mp.end()){
	            j++;
	        }
	        if(mp.find(str[j])==mp.end())mp[str[j]]++;
	        swap(str[i],str[j]);
            i++,j++;
	    }
	    return str.substr(0,i);
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