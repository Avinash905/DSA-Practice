//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        // TC - O(N)
        // SC - O(1)
        int i=0,j=0,ans=0;
        unordered_map<int,int> freq;
        
        while(j<N){
            freq[fruits[j]]++;
            if(freq.size()<2)j++;
            else if(freq.size()==2){
                ans=max(ans,j-i+1);
                j++;
            }
            else{
                int fruit=fruits[i];
                while(freq[fruit]>0){
                    freq[fruits[i]]--;
                    if(freq[fruits[i]]==0){
                        freq.erase(fruits[i]);
                        i++;
                        break;
                    }
                    i++; 
                }
                j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends