//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}




// } Driver Code Ends


string sort(string s){
    //complete the function here
    int freq[26]={0};
    
    for(int i=0;i<s.size();i++)freq[s[i]-'a']++;
    
    s="";
    for(int i=0;i<26;i++){
        while(freq[i]){
            s+=i+'a';
            freq[i]--;
        }
    }
    
    return s;
}