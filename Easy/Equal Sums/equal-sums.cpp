//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    vector<int> EqualSum(int a[], int n)
    {
        // Complete the function
        if(n==1)return {a[0],2,2};
        
        vector<int> ans{INT_MAX,0,0};
        int lsum=0,rsum=accumulate(a,a+n,0);
        
        for(int i=0;i<n-1;i++){
            lsum+=a[i];
            rsum-=a[i];
            
            int diff=abs(rsum-lsum);
            
            if(ans[0]>diff){
                ans[0]=diff;
                ans[1]=i+2;
                
                if(rsum>=lsum)ans[2]=1;
                else ans[2]=2;
            }
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    vector<int> v;
	    v = ob.EqualSum(arr, n);
	    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
	}
	return 0;
}
// } Driver Code Ends