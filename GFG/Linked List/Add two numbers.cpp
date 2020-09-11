// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1/?track=amazon-linkedlists&batchId=192

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
Node* reverselist(Node* head)
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
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    first = reverselist(first);
    second = reverselist(second);
    // return first;
    Node *start = NULL;
    Node *end = NULL;
    
    int carry=0;
    
    while(first!=NULL||second!=NULL)
    {
        int a = first!=NULL?first->data:0;
        int b = second!=NULL?second->data:0;
        
        int sum = a+b+carry;
        
        carry = sum/10;
        sum %=10;
        
        if(start==NULL)
        {
            start = new Node(sum);
            end = start;
        }
        else{
            end->next = new Node(sum);
            end = end->next;
        }
        if(first!=NULL)
            first = first->next;
        if(second!=NULL)
            second = second->next;
    }
    if(carry)
        {
            end->next = new Node(carry);
            // end = end->next;
        }
        return reverselist(start);
    
}
