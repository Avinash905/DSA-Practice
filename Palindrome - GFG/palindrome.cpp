//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int x)
		{
		    // Code here.
		    // TC - O(log10x)
            // SC - O(1)
		    if(x<0)return "No";
            int num=x,revNum=0;
    
            while(x){
                int rem=x%10;
                revNum=1LL*revNum*10+rem;
                x/=10;
            }
            return num==revNum?"Yes":"No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends