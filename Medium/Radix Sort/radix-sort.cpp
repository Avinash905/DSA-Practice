//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++

void countSort(int arr[],int n,int pos){
    int count[10]={0},ans[n]={0};
    
    for(int i=0;i<n;i++)count[(arr[i]/pos)%10]++;
    
    for(int i=1;i<10;i++)count[i]+=count[i-1];
    
    for(int i=n-1;i>=0;i--)ans[--count[(arr[i]/pos)%10]]=arr[i];
    
    for(int i=0;i<n;i++)arr[i]=ans[i];
}

void radixSort(int arr[], int n) 
{ 
   // code here
   int maxi=*max_element(arr,arr+n);
   
   for(int pos=1;maxi/pos>0;pos*=10){
       countSort(arr,n,pos);
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