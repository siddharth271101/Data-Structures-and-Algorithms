// https://practice.geeksforgeeks.org/viewSol.php?subId=f2a378a568f684046597504f4e1f9e89&pid=700523&user=siddharth271101

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends


/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

/* Function to mergesort the linked list
   It should return head of the modified list  */

Node* merge(Node* a,Node* b)
{
if(!a)
    return b;
if(!b)
    return a;

if(a->data<b->data)
{
    a->next=merge(a->next,b);
    return a;
}
else
{
    b->next=merge(a,b->next);
    return b;   
}
}
Node* mergeSort(Node* head) {
// your code here
    if(head==NULL || head->next==NULL)
        return head;
    
    Node* slow=head;
    Node* fast=head->next;
    
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    Node* head1=slow->next;
    slow->next=NULL;
    
    return merge(mergeSort(head),mergeSort(head1));

}


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        a = mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends