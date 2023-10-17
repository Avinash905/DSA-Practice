//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int n=nums.size(),xorRes=0;
        for(int i=0;i<n;i++){
            xorRes^=nums[i];
        }
        
        int count=0;
        while(xorRes){
            if(xorRes&1)break;
            count++;
            xorRes=xorRes>>1;
        }
        
        int xorRes1=0,xorRes2=0;
        for(int i=0;i<n;i++){
            if(nums[i]&(1<<count))xorRes1^=nums[i];
            else xorRes2^=nums[i];
        }
        if(xorRes1<xorRes2)return {xorRes1,xorRes2};
        else return {xorRes2,xorRes1};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends