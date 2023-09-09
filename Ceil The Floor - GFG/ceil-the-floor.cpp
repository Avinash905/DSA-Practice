//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

int ceil(int arr[], int x, int n){
	// TC - O(log(n))
	// SC - O(1)
	if(arr[0]>x)return arr[0];
	int start=0,end=n-1,ans=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==x){
			return x;
		}
		else if(arr[mid]>x){
			ans=arr[mid];
			end=mid-1;
		}
		else start=mid+1;
	}
	return ans;	
}
int floor(int arr[], int x, int n){
	// TC - O(log(n))
	// SC - O(1)
	int start=0,end=n-1,ans=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]==x){
			return x;
		}
		else if(arr[mid]>x)end=mid-1;
		else{
			ans=arr[mid];
			start=mid+1;
		}
	}
	return ans;	
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    // TC - O(nlog(n))
	// SC - O(1)
	sort(arr,arr+n);
	return {floor(arr, x, n),ceil(arr, x, n)};
}