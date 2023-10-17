//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    vector<int> leftMax(int arr[],int n){
        vector<int> v;
        stack<int> s;
        for(int i=0;i<n;i++){
            if(s.empty())v.push_back(0);
            else if(s.top()>arr[i]){
                v.push_back(s.top());
            }
            else v.push_back(0);
            if(s.empty() || s.top()<arr[i])s.push(arr[i]);
        }
        return v;
    }
    vector<int> rightMax(int arr[],int n){
        vector<int> v;
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            if(s.empty())v.push_back(0);
            else if(s.top()>arr[i]){
                v.push_back(s.top());
            }
            else v.push_back(0);
            if(s.empty() || s.top()<arr[i])s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
    long long trappingWater(int arr[], int n){
        // code here
        vector<int> left=leftMax(arr,n);
        vector<int> right=rightMax(arr,n);
        
        long long ans=0;
        for(int i=1;i<n-1;i++){
            int mini=min(left[i],right[i]);
            if(mini>0)ans+=mini-arr[i];
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends