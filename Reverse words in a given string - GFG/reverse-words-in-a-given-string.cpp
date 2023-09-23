//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here
        int n=s.size();
        string str="",temp="";
        for(int i=n-1;i>=0;i--){
            
            if(s[i]=='.'){
                str+=temp+".";
                temp="";
            }
            else temp=s[i]+temp;
        }
        str+=temp;
        return str;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends