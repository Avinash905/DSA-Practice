//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isValid(vector<int> bloomDay,int mid,int n,int M,int K){
        int bouq=0,flowers=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                flowers++;
            }
            else{
                flowers=0;
            }
            if(flowers==K){
                bouq++;
                flowers=0;
            }
        }

        if(bouq>=M)return true;
        return false;
    }
    int solve(int M, int K, vector<int> &bloomDay){
        // Code here
        // TC - O(nlog(max(nums)))
        // SC - O(1)
        
        if(M*K>bloomDay.size())return -1;
    
        int n=bloomDay.size(),start=*min_element(bloomDay.begin(),bloomDay.end()),ans=-1,
        end=*max_element(bloomDay.begin(),bloomDay.end());
    
        while(start<=end){
            int mid=start+(end-start)/2;
    
            if(isValid(bloomDay,mid,n,M,K)){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends