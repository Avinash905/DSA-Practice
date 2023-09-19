//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    bool checkIso(string str1, string str2){
        unordered_map<char,char> mp1;
        for(int i=0;i<str1.size();i++){
            if(mp1.find(str1[i])==mp1.end()){
                mp1[str1[i]]=str2[i];
            }
            else{
                if(mp1[str1[i]]!=str2[i])return false;
            }
        }
        return true;
    }
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        // Your code here
        // TC - O(n)
        // SC - O(n)
        if(str1.size()!=str2.size())return false;
        return checkIso(str1,str2)&&checkIso(str2,str1);
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends