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
        // Your code here
        string s=str1;
        int n=str1.size();
        char first=str1[0],second=str1[1];
        for(int i=0;i<n-2;i++){
            s[i]=str1[i+2];
        }
        s[n-2]=first;
        s[n-1]=second;
        return s==str2;
    }
    bool clk(string str1, string str2)
    {
        // Your code here
        string s=str1;
        int n=str1.size();
        char first=str1[n-1],second=str1[n-2];
        for(int i=n-1;i>=0;i--){
            s[i]=str1[i-2];
        }
        s[0]=second;
        s[1]=first;
        return s==str2;
    }
    bool isRotated(string str1, string str2)
    {
        // Your code here
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