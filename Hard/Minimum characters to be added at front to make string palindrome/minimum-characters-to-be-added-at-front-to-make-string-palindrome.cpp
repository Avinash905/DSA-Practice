//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int lps(string s,int size) {
	    // Your code goes here
	    int n=s.size(),lpsArr[n]={0},pre=0,suf=1;
	    
	    while(suf<n){
	        if(s[pre]==s[suf]){
	            lpsArr[suf]=pre+1;
	            pre++,suf++;
	        }
	        else{
	            if(pre==0)suf++;
	            else pre=lpsArr[pre-1];
	        }
	    }
	    return size-lpsArr[n-1];
	}
    int minChar(string str){
        //Write your code here
        string temp=str;
        reverse(temp.begin(),temp.end());
        str+=('$'+temp);
        return lps(str,temp.size());
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends