//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int num){
        //code here
        // TC - O(log10num)
        // SC - O(1)
        int ans=0;
        while(num){
            int rem=num%10;
            ans+=rem;
            num/=10;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends