//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



bool metaStrings (string s1, string s2)
{
    // your code here
    // TC - O(n)
    // SC - O(1)
    int n1=s1.size(),n2=s2.size(),first=-1,second=-1;
    if(s1==s2 || n1!=n2)return false;
    
    for(int i=0;i<n1;i++){
        if(s1[i]!=s2[i]){
            if(first==-1)first=i;
            else second=i;
        }
    }
    swap(s2[first],s2[second]);
    return s1==s2;
}