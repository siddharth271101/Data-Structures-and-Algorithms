// https://practice.geeksforgeeks.org/viewSol.php?subId=c7838fefc0a54ef434515d07090e9ead&pid=700163&user=siddharth271101

#include<iostream>
#include<stdio.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int count1 = 0,count2 = 0;
    Node *last1 = head1;
    Node *last2 = head2;
    while(last1!=NULL)
    {
        last1 = last1->next;
        count1++;
    }
    while(last2!=NULL)
    {
        last2 = last2->next;
        count2++;
    }
    last1 = head1;
    last2 = head2;
    if(count1>count2)
    {
        int k = count1-count2; 
        while(k--)
            last1 = last1->next;
    }
    if(count2>count1)
    {
        int k = count2-count1; 
        while(k--)
            last2 = last2->next;
    }

    while(last1!=NULL && last2!=NULL)
    {
        if(last1==last2)
            return last1->data;
        last1 = last1->next;
        last2 = last2->next;
    }
    return -1;
    // (last1->next==last2->next)
}

