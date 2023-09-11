//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        sort(arr,arr+n);
        
        stack<long long> odd;
        queue<long long> even;
        for(int i=0;i<n;i++){
            if(arr[i]%2==1)odd.push(arr[i]);
            else even.push(arr[i]);
        }
        int i=0;
        while(!odd.empty()){
            arr[i]=odd.top();
            odd.pop();
            i++;
        }
        while(!even.empty()){
            arr[i]=even.front();
            even.pop();
            i++;
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends