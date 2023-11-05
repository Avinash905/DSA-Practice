//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        for(int i=0;i<N;i++){
            int currNum=arr[i]%100000,idxNum=arr[currNum-1]%100000,count=(arr[currNum-1]/100000)+1;
            if(currNum>N)continue;
            // cout<<i<<" "<<currNum<<" "<<idxNum<<" "<<count<<endl;
            arr[currNum-1]=idxNum+100000*count;
        }
        
        for(int i=0;i<N;i++){
            int count=arr[i]/100000;
            arr[i]=count;
        }
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends