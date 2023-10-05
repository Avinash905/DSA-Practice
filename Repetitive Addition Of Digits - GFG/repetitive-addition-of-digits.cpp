//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int singleDigit(long long num)
    {
        // Write Your Code here
        // TC - O(log10num)
        // SC - O(1)
        while(num>9){
            long long ans=0;
            while(num){
                int rem=num%10;
                ans+=rem;
                num/=10;
            }
            if(ans<=9)return ans;
            num=ans;
        }
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        int ans  = ob.singleDigit(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends