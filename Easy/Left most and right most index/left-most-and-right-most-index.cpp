//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long left(vector<long long> v,long long x){
        long n=v.size(),st=0,end=n-1,ans=-1;
        
        while(st<=end){
            long mid=st+(end-st)/2;
            
            if(v[mid]==x){
                ans=mid;
                end=mid-1;
            }
            else if(v[mid]>x)end=mid-1;
            else st=mid+1;
        }
        return ans;
    }
    long right(vector<long long> v,long long x){
        long n=v.size(),st=0,end=n-1,ans=-1;
        
        while(st<=end){
            long mid=st+(end-st)/2;
            
            if(v[mid]==x){
                ans=mid;
                st=mid+1;
            }
            else if(v[mid]>x)end=mid-1;
            else st=mid+1;
        }
        return ans;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        return {left(v,x),right(v,x)};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends