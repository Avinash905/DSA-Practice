//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int lps(string s,int size){
        int n=s.size(),first=0,second=2;
        int lpsArr[n+1]={0};
        char str[n+1];
        for(int i=0;i<n;i++){
            str[i+1]=s[i];
        }
        while(second<=n){
            if(str[first+1]==str[second]){
                lpsArr[second]=first+1;
                first++;
                second++;
            }
            else{
                if(first!=0)first=lpsArr[first];
                else second++;
            }
        }
        return size-lpsArr[n];
    }
    int minChar(string str){
        //Write your code here
        string temp=str;
        reverse(str.begin(),str.end());
        temp+=("$"+str);
        return lps(temp,str.size());
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