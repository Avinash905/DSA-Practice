//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string s)
    {
        // Your code goes here
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        int i=0,j=0,mini=INT_MAX,count=mp.size();
        mp.clear();
        
        while(j<s.size()){
            mp[s[j]]++;
            if(count>mp.size())j++;
            else{
                while(count==mp.size()){
                    mp[s[i]]--;
                    if(mp[s[i]]==0)mp.erase(s[i]);
                    i++;
                }
                mini=min(mini,j-i+2);
                // cout<<mini<<endl;
                j++;
            }
        }
        return mini;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends