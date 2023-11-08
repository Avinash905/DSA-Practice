//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool rotate(string str1,string str2){
        int n=str2.size();
        
        str2=str2[n-1]+str2;
        str2.pop_back();
        str2=str2[n-1]+str2;
        str2.pop_back();
        
        return str1==str2;
    }
    bool isRotated(string str1, string str2)
    {
        // Your code here
        return rotate(str1,str2)||rotate(str2,str1);
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