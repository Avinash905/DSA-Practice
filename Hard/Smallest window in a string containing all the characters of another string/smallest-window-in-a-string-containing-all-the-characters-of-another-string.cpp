//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        vector<int> mp(26,0);
        int i=0,j=0,count=0,mini=INT_MAX,first=0,second=0;
        
        for(int i=0;i<p.size();i++){
            if(mp[p[i]-'a']==0)count++;
            mp[p[i]-'a']++;
        }
        
        
        while(j<s.size()){
            mp[s[j]-'a']--;
            if(mp[s[j]-'a']==0)count--;

            while(count==0){
                if(mini>j-i+1){
                    first=i;
                    second=j;
                    mini=j-i+1;
                }
                mp[s[i]-'a']++;
                if(mp[s[i]-'a']==1)count++;

                i++;
            }
            
            j++;
        }
        if(mini==INT_MAX)return "-1";
        
        return s.substr(first,second-first+1);
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends