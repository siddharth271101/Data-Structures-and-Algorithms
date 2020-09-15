// https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/1

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */

void rearrange(struct Node *odd);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        rearrange(start);
        printList(start);
    }
    return 0;
}
// } Driver Code Ends


/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/

Node* reverselist(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* nxt;
    while(curr)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

void rearrange(struct Node *odd)
{
    //add code here
    Node* even = odd->next;
    Node* curr1 = odd;
    Node* prev = NULL;
    Node* curr2 = even;
    
    while(curr1 || curr2)
    {
        prev = curr1;
        curr1->next = curr1->next?curr1->next->next:curr1->next;
        curr1 = curr1->next;
        
        if(curr2)
        {
        curr2->next = curr2->next?curr2->next->next:curr2->next;
        curr2 = curr2->next;
        }
        // prev = prev->next;
    }
    prev->next = reverselist(even);
    
}

