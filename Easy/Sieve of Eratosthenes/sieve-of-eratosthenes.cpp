//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int> freq;
        
        for(int i=2;i<=N;i++){
            freq.push_back(i);
        }
        for(int i=0;i<freq.size();i++){
            int ele=freq[i];
            if(ele>0){
                for(int j=i+ele;j<freq.size();j+=ele){
                    freq[j]=-1;
                }
            }
        }
        
        vector<int> ans;
        for(int i=0;i<freq.size();i++){
            if(freq[i]>0)ans.push_back(freq[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends