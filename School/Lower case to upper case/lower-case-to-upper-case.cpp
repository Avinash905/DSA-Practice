//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


void solve(string &s,int i){
    if(i>=s.size())return;
    
    s[i]=s[i]-'a'+'A';
    solve(s,i+1);
}
string to_upper(string str){
    //code
    solve(str,0);
    return str;
}