//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string s)
{
    // your code here
    // TC - O(n)
    // SC - O(1)
    bool flag=0;
    int first=0,second=0,n=s.size();
    for(int i=0;i<n;i++){
        if(flag!=s[i]-'0')first++;
        flag=!flag; 
    }
    flag=1;
    for(int i=0;i<n;i++){
        if(flag!=s[i]-'0')second++;
        flag=!flag; 
    }
    return min(first,second);
}