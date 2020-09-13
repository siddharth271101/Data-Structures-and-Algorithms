// https://practice.geeksforgeeks.org/problems/linked-list-in-zig-zag-fashion/1

#include <bits/stdc++.h>
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
 
 Node *zigZag(Node* head);


int main() {
	// your code goes here
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
				temp=temp->next;
			}
		}
		Node *ans = zigZag(head);
		print(ans);
		cout<<endl;
	}
	return 0;
}// } Driver Code Ends


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


Node *zigZag(Node* head)
{
 // your code goes here
 int count = 0;
 Node* prev = head;
 Node* curr = head->next;
 while(curr)
 {
     if(count%2==0)
     {
         if(prev->data > curr->data)
            {
                int data = prev->data;
                prev->data = curr->data;
                curr->data = data;
            }
     }
     else{
            if(prev->data < curr->data)
            {
                int data = prev->data;
                prev->data = curr->data;
                curr->data = data;
            }
     }
     count++;
     curr = curr->next;
     prev = prev->next;
 }
 return head;
}