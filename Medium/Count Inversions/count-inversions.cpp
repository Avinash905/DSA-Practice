//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(long long arr[],long long low,long long high,long long mid,long long& count){
        if(low==high)return;
        
        long long i=low,j=mid+1,k=0;
        // long long ans[high]={0};
        vector<long long> v;
        
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                // ans[k]=arr[i];
                v.push_back(arr[i]);
                i++;
                // k++;
            }
            else{
                count+=mid-i+1;
                // ans[k]=arr[j];
                v.push_back(arr[j]);
                j++;
                // k++;
            }
        }
        while(i<=mid){
            // ans[k]=arr[i];
            v.push_back(arr[i]);
            i++;
            // k++;
        }
        while(j<=high){
            count+=mid-i+1;
            // ans[k]=arr[j];
            v.push_back(arr[j]);
            j++;
            // k++;
        }
        k=low;
        for(long long a=0;a<v.size();a++){
            arr[k]=v[a];
            k++;
        }
    }
    void mergeSort(long long arr[],long long low,long long high,long long& count){
        if(low>=high)return;
        
        long long mid=low+(high-low)/2;
        
        mergeSort(arr,low,mid,count);
        mergeSort(arr,mid+1,high,count);
        
        merge(arr,low,high,mid,count);
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long count=0;
        mergeSort(arr,0,N-1,count);
        return count;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends