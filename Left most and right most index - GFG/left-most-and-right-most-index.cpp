//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long leftIdx(vector<long long> v, long long x){
        long long start=0,end=v.size()-1,ans=-1;
        
        while(start<=end){
            long long mid=start+(end-start)/2;
            
            if(v[mid]==x){
                ans=mid;
                end=mid-1;
            }
            else if(v[mid]>x)end=mid-1;
            else start=mid+1;
        }
        return ans;
    }
    long long rightIdx(vector<long long> v, long long x){
        long long start=0,end=v.size()-1,ans=-1;
        
        while(start<=end){
            long long mid=start+(end-start)/2;
            
            if(v[mid]==x){
                ans=mid;
                start=mid+1;
            }
            else if(v[mid]>x)end=mid-1;
            else start=mid+1;
        }
        return ans;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        // TC - O(log(n))
        // SC - O(1)
        return {leftIdx(v,x),rightIdx(v,x)};
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