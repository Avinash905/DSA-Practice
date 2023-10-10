//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert(stack<int>& st,int last){
    if(st.size()==0 || st.top()<last){
        st.push(last);
        return;
    }
    int top=st.top();
    st.pop();
    insert(st,last);
    st.push(top);
}
void SortedStack :: sort()
{
    //Your code here
    // TC - O(n^2)
    // SC - O(n)
    if(s.size()==1)return;
        
    int last=s.top();
    s.pop();
    
    sort();
    insert(s,last);
}









