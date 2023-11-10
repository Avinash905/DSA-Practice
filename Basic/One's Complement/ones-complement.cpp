//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
public:
    int onesComplement(int N){
        //code here
        int ans=0,i=0;
        
        while(N){
            int rem=N%2;
            ans+=pow(2,i)*(!rem);
            
            i++;
            N/=2;
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
        int n;
        cin>>n;
        
        Solution ob;
        cout<<ob.onesComplement(n)<<"\n";
    }
}
// } Driver Code Ends