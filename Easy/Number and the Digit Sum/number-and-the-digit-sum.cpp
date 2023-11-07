//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        long long digitSum(long long N){
            long long sum=0;
            
            while(N){
                sum+=N%10;
                N/=10;
            }
            return sum;
        }
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
            long long st=1,end=N;
            
            while(st<=end){
                long long mid=st+(end-st)/2;
                
                if(mid-digitSum(mid)>=K)end=mid-1;
                else st=mid+1;
            }
            return N-end;
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends