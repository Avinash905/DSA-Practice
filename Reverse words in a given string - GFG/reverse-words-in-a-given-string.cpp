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
        vector<string> words;
        int i=s.size()-1;
        for(int i=0;i<s.size();i++){
            if(s[i]!='.')temp+=s[i];
            else{
                words.push_back(temp);
                temp="";
            }
        }
        words.push_back(temp);
        for(int i=words.size()-1;i>=0;i--){
            str+=words[i];
            str+=".";
        }
        str.pop_back();
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