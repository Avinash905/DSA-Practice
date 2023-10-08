//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void mergeArr(int arr[], int start, int mid, int end)
    {
        // Your code here
        int first=start,second=mid+1,k=0;
        int ans[end-start+1]={0};

        while(first<=mid && second<=end){
            if(arr[first]<=arr[second]){
                ans[k++]=(arr[first]);
                first++;
            }
            else{
                ans[k++]=(arr[second]);
                second++;
            }
        }
        while(first<=mid){
            ans[k++]=(arr[first]);
            first++;
        }
        while(second<=end){
            ans[k++]=(arr[second]);
            second++;
        }
        
        k=0;
        for(int i=start;i<=end;i++){
            arr[i]=ans[k++];
        }
    }
    public:
    void mergeSort(int arr[], int start, int end)
    {
        //code here
        // TC - O(nlog(n))
        // SC - O(n + log(n))
        if(start==end)return;
    
        int mid=start+(end-start)/2;
    
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        
        mergeArr(arr,start,mid,end);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends