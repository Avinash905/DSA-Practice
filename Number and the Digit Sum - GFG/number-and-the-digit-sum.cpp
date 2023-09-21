//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        long long digitSum(long long mid){
            long long sum=0;
            while(mid){
                sum+=mid%10;
                mid/=10;
            }
            return sum;
        }
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
            long long start=1,end=N;
            while(start<=end){
                long long mid=start+(end-start)/2;
                
                if(mid-digitSum(mid)<K)start=mid+1;
                else end=mid-1;
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