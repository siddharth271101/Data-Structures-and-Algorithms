// https://practice.geeksforgeeks.org/viewSol.php?subId=ee4c65a33403797ef9d678be0d876bad&pid=700170&user=siddharth271101

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
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


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}// } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/

int getNthFromLast(Node *head, int n)
{
    Node* first = head;
    Node* last = head;
    for(int i=1;i<n;i++)
    {
        first = first->next;
        if(!first)
            return -1;
    }
    while(first->next)
    {
        first = first->next;
        last = last->next;
    }
    return last->data;
}