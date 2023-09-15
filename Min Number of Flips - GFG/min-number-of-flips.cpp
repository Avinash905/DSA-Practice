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
    int count1=0,count2=0,n=s.size();
    for(int i=0;i<n;i++){
        if(flag!=s[i]-'0')count1++;
        flag=!flag;
    }
    flag=1;
    for(int i=0;i<n;i++){
        if(flag!=s[i]-'0')count2++;
        flag=!flag;
    }
    return min(count1,count2);
}