//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here
        // TC - O(n)
        // SC - O(1)
        int left=0,right=n-1,mid=0;
        while(mid<=right){
            if(a[mid]==2){
                swap(a[mid],a[right]);
                right--;
            }
            else if(a[mid]==0){
                swap(a[mid],a[left]);
                left++;
                mid++;
            }
            else mid++;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends