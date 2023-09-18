//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string s1, string s2)
{
    // your code here
    // TC - O(n1+n2)
    // SC - O(n1+n2)
    
    string s="";
    int i=0,j=0,k=0,n1=s1.size(),n2=s2.size();
    while(k<n1+n2){
        if(i<n1){
            s+=s1[i++];
            k++;
        }
        if(j<n2){
            s+=s2[j++];
            k++;
        }
    }
    return s;
}