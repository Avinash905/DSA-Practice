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
        int totalXor=0;
        for(int i=0;i<nums.size();i++){
            totalXor^=nums[i];
        }
        int pos=0;
        while(totalXor){
            if(totalXor&1)break;
            totalXor=totalXor>>1;
            pos++;
        }
        int first=0,second=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]>>pos)&1)first^=nums[i];
            else second^=nums[i];
        }
        if(first>second)return {second,first};
        else return {first,second};
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