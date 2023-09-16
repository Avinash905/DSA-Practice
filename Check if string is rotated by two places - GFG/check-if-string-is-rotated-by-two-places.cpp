//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool antiClk(string str1, string str2)
    {
        int n=str1.size();
        char first=str1[0],second=str1[1];
        
        if(str2[n-2]!=first && str2[n-1]!=second)return false;
        
        for(int i=0;i<n-2;i++){
            if(str2[i]!=str1[i+2])return false;
        }

        return true;
    }
    bool clk(string str1, string str2)
    {
        int n=str1.size();
        char first=str1[n-1],second=str1[n-2];
        
        if(str2[1]!=first && str2[0]!=second)return false;
        
        for(int i=2;i<n;i++){
            if(str2[i]!=str1[i-2])return false;
        }

        return true;
    }
    bool isRotated(string str1, string str2)
    {
        // Your code here
        // TC - O(n)
        // SC - O(n)
        
        if(str1==str2)return 1;
        
        return antiClk(str1,str2)||clk(str1,str2);
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends