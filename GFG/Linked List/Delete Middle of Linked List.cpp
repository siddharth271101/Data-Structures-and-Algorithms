// https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1/?track=amazon-linkedlists&batchId=192

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 


// } Driver Code Ends



/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list

Node* deleteMid(Node* head)
{
    if(head == NULL)
    {
        return head;
    }
    
    Node *slow = head, *fast = head, *prev = head;
    
    while(fast != NULL && fast->next != NULL)
    {
        prev = slow;
        
        slow = slow->next;
        fast = fast->next->next;
    }
    
    prev->next = slow->next;
    
    return head;
}