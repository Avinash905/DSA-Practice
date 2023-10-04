//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    // TC - O(N)
        // SC - O(1)
        int i=0,j=0,count=0,N=txt.size(),n=pat.size(),tempCount=0;
        unordered_map<char,int> patFreq;
        
        for(int i=0;i<n;i++)patFreq[pat[i]]++;
        
        while(j<N){
            if(patFreq.find(txt[j])!=patFreq.end()){
              patFreq[txt[j]]--;
              if(patFreq[txt[j]]==0)tempCount++;
            }
            if(j-i+1<n)j++;
            else{
                if(tempCount==patFreq.size()){
                    count++;
                }
                if(patFreq.find(txt[i])!=patFreq.end()){
                    if(patFreq[txt[i]]==0)tempCount--;
                    patFreq[txt[i]]++;
                }
                i++;
                j++;
            }
        }
        
        return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends