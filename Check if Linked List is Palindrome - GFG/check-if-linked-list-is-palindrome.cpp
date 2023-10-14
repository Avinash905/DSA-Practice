//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    struct Node* reverse(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* prev=NULL;
        Node* curr=NULL;
        while(head!=NULL){
            curr=head->next;
            head->next=prev;
            prev=head;
            head=curr;
        }
        return prev;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head->next==NULL)return 1;
        
        Node *temp=head;
        int count=0;
        
        while(temp){
            temp=temp->next;
            count++;
        }
        int half=(count)/2;
        temp=head;
        
        while(half>1){
            temp=temp->next;
            half--;
        }
        Node* first=temp->next;
        temp->next=NULL;
        
        if(count%2==1){
            Node* last=first;
            first=first->next;
            last->next=NULL;
        }
        
        Node* head1=reverse(first);
        
        while(head && head1){
            if(head->data!=head1->data)return 0;
            head=head->next;
            head1=head1->next;
        }
        return 1;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends