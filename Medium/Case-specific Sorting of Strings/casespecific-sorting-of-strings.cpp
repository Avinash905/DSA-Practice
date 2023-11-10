//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    bool isLowerCase(char ch){
        return (ch>='a' && ch<='z');
    }
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        int freqLower[26]={0};
        int freqUpper[26]={0};
        
        for(int i=0;i<n;i++){
            if(isLowerCase(str[i]))freqLower[str[i]-'a']++;
            else freqUpper[str[i]-'A']++;
        }
        
        int lowIdx=0,highIdx=0;
        
        for(int i=0;i<n;i++){
            if(isLowerCase(str[i])){
                while(freqLower[lowIdx]==0)lowIdx++;
                str[i]=lowIdx+'a';
                freqLower[lowIdx]--;
            }
            else{
                while(freqUpper[highIdx]==0)highIdx++;
                str[i]=highIdx+'A';
                freqUpper[highIdx]--;
            }
        }
        
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends