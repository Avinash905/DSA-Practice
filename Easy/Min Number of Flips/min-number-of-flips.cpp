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


int minFlips (string S)
{
    // your code here
    int count1=0,count2=0,flag=0;
    
    for(int i=0;i<S.size();i++){
        if(S[i]-'0'!=flag)count1++;
        flag=!flag;
    }
    flag=1;
    for(int i=0;i<S.size();i++){
        if(S[i]-'0'!=flag)count2++;
        flag=!flag;
    }
    
    return min(count1,count2);
}