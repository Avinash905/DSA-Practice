//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        // TC - O(n)
        // SC - O(1)
        int countZeros=0;
        for(int i=0;i<X.size();i++){
            if(X[i]-'0'==0)countZeros++;
            else break;
        }
        X.erase(0,countZeros);
        
        countZeros=0;
        for(int i=0;i<Y.size();i++){
            if(Y[i]-'0'==0)countZeros++;
            else break;
        }
        Y.erase(0,countZeros);
        
        int n=X.size(),m=Y.size(),i=n-1,j=m-1,carry=0;
        string ans="";
        
        if(n==0 && m==0)return "0";
        
        while(i>=0 && j>=0){
            int num1=X[i]-'0';
            int num2=Y[j]-'0';
            int sum=num1+num2+carry;
            carry=0;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
            ans+=to_string(sum);
            i--;
            j--;
        }
        while(i>=0){
            if(carry){
                int num1=X[i]-'0';
                int sum=num1+carry;
                carry=0;
                if(sum>9){
                    sum=sum%10;
                    carry=1;
                }
                ans+=to_string(sum);
                i--;
            }
            else ans+=X[i--];
        }
        while(j>=0){
            if(carry){
                int num2=Y[j]-'0';
                int sum=num2+carry;
                carry=0;
                if(sum>9){
                    sum=sum%10;
                    carry=1;
                }
                ans+=to_string(sum);
                j--;
            }
            else ans+=Y[j--];
        }
        if(carry)ans+=to_string(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends