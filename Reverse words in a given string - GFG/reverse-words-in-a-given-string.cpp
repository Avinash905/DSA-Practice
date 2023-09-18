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
        // TC - O(n)
        // SC - O(n)
        string str="",temp="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!='.')temp=s[i]+temp;
            else{
                temp+=".";
                str+=temp;
                temp="";
            }
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