// https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1

#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


Node *compute(Node *head);

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Node *result = compute(head);
        print(result);
        cout<<endl;
    }
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
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
Node *compute(Node *head)
{
    // your code goes here
    if(!head || !head->next)
        return head;
        
    head = reverselist(head);
    
    int max = head->data;
    
    Node* curr = head;
    
    while(curr && curr->next)
    {
        if(curr->next->data < max)
        {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else{
        curr = curr->next;
        max = curr->data;
        }
    }
    head = reverselist(head);
    return head;
    
}
