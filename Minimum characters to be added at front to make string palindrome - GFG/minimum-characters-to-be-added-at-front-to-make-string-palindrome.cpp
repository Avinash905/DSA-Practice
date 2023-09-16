//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int lps(string str){
        int n=str.size();
        char s[n+1];
        int lpsArr[n+1]={0};
        
        for(int i=0;i<n;i++){
            s[i+1]=str[i];
        }
        
        int first=0,second=2;
        while(second<=n){
            if(s[first+1]==s[second]){
                lpsArr[second]=first+1;
                first++;
                second++;
            }
            else{
                if(first==0)second++;
                else first=lpsArr[first];
            }
        }
        return lpsArr[n];
    }
    int minChar(string str){
        //Write your code here
        string temp=str;
        reverse(temp.begin(),temp.end());
        string newStr=str+"$"+temp;
        return str.size()-lps(newStr);
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