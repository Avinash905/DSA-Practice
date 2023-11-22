//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector<int> lps(string s) {
    	    // Your code goes here
    	    int n=s.size(),pre=0,suf=1;
    	    vector<int> lpsArr(n,0);
    
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
    	    
    	    return lpsArr;
        }
        vector<int> search(string pat, string txt)
        {
            //code hee.
            vector<int> ans;
            int m=txt.size(),n=pat.size(),i=0,j=0;
            vector<int> lpsArr=lps(pat);
    
    	    while(i<m){
                if(txt[i]==pat[j])i++,j++;
                else{
                    if(j!=0)j=lpsArr[j-1];
                    else i++;
                }
                if(j==n){
                    ans.push_back(i-j+1);
                    i=i-j+1;
                    j=0;
                }
            }
    	    
            if(ans.size()==0)return {-1};
            return ans;
        }
};













//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends