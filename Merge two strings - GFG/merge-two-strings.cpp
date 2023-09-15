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
    int i=0,j=0,k=0,n1=s1.size(),n2=s2.size();
    string ans="";
    while(i<n1 && j<n2){
        if(k%2==0){
            ans+=s1[i];
            k++;
            i++;
        }
        else{
            ans+=s2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        ans+=s1[i];
        i++;
    }
    while(j<n2){
        ans+=s2[j];
        j++;
    }
    return ans;
}