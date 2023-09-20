//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++

vector<int> counting(int n,int arr[],int pos)
{
	// TC - O(n)
	// SC - O(1)
    vector<int> count(10,0);
	vector<int> ans(n,0);

	for(int i=0;i<n;i++){
		count[(arr[i]/pos)%10]++;
	}
	for(int i=1;i<count.size();i++){
		count[i]+=count[i-1];
	}
	for(int i=n-1;i>=0;i--){
		ans[--count[(arr[i]/pos)%10]]=arr[i];
	}
    for(int i=0;i<n;i++){
		arr[i]=ans[i];
	}
	return ans;
}

void radixSort(int arr[], int n) 
{ 
   // code here
   // TC - O(n*digits of max num)
	// SC - O(n*digits of max num)
   int maxi=arr[0];
   for(int i=1;i<n;i++)maxi=max(maxi,arr[i]);
   
   for(int pos=1;maxi/pos>0;pos*=10){
       counting(n,arr,pos);
   }
} 

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
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends