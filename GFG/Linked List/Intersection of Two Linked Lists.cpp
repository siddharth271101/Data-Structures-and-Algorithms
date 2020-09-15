// https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
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
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // code here
    // return the head of intersection list
    Node* curr = head2;
    unordered_set <int> s;
    while(curr)
    {
        s.insert(curr->data);
        curr = curr->next;
    }
    // curr->next = head2;
    Node* start = NULL,*end=NULL;
    curr = head1;
    while(curr)
    {
        if(s.find(curr->data)!=s.end())
        {
            if(start==NULL)
            {
            start = new Node(curr->data);
            end = start;
            }
            else{
                end->next = new Node(curr->data);
                end = end->next;
            }
        }
             curr = curr->next;
    }
    return start;
    
}