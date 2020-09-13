// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

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



bool isPalindrome(Node *head);
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
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

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
/*You are required to complete this method */
Node *reverselist(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *nxt = NULL;
    while(curr!=NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    //Your code here
    Node *first = head;
    Node *second = head;
    while(second!=NULL&&second->next!=NULL)
    {
        first = first->next;
        second = second->next->next;
    }
    first = reverselist(first);
    second = head;
    while(first!=NULL&&second!=NULL)
    {
        if(first->data!=second->data)
            return 0;
        first = first->next;
        second = second->next;
    }
    return 1;
}
