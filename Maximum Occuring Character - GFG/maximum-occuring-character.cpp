//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int freq[26]={0};
        for(int i=0;i<str.length();i++){
            freq[str[i]-'a']++;
        }
        int maxi=-1;
        char ans;
        for(int i=0;i<26;i++){
            if(freq[i]>maxi){
                maxi=freq[i];
                ans=i+'a';
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends