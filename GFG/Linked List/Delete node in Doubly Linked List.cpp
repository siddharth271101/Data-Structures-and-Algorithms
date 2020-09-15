// https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1

#include <stdio.h>
#include <stdlib.h>

/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};

Node* deleteNode(struct Node **head_ref,int temp);

/* Function to print Nodes in a given doubly linked list
   This function is same as printList() of singly linked lsit */
void printList(struct Node *node)
{
  while(node!=NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
   printf("\n");
}
 
/* Drier program to test above functions*/
int main()
{
  int t, x, n, i;
  scanf("%d",&t);
  
  while(t--)
  {
      /* Start with the empty list */
      struct Node *temp,*head = NULL;
      scanf("%d",&n);
      
      temp = NULL;
      
      for(i=0;i<n;i++){
        scanf("%d",&x);
        
        if(head == NULL){
            head = new Node(x);
            temp = head;
        }
        else{
            Node *temp1 = new Node(x);
            temp->next = temp1;
            temp1->prev = temp;
            temp = temp->next;
        }
      }
  
    scanf("%d",&x);
      
    deleteNode(&head,x);  /*delete first Node*/  
      
        /* Modified linked list will be NULL<-8->NULL */
        printList(head);           
        while(head->next!=NULL)
        {
    	    temp=head;
    	    head=head->next;
    	    free(temp);
    	}
    	
    	free(head);
	}
	return 0;
}
// } Driver Code Ends


/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

// Function to delete the node at position x
Node* deleteNode(Node **head_ref, int x)
{
  //Your code here
//   if(x==1)
//   {
//       Node* temp = (*head_ref);
//       Node* nxt = (*head_ref);
//       nxt = nxt->next;
//       nxt->prev = NULL;
//       head_ref = nxt;
//       free(temp);
//   }
  Node* curr = (*head_ref);
//   Node** prev = NULL;
//   Node** nxt;
  while(--x)
  {
    //   prev = curr;
      curr = curr->next;
      
  }
  if(curr->prev==NULL)
  {
      Node* nxt = curr->next;
      nxt->prev = NULL;
      (*head_ref) = nxt;
      free(curr);
      return (*head_ref);
  }
  if(curr->next==NULL)
  {
      Node* prev = curr->prev;
      prev->next = NULL;
      free(curr);
      return (*head_ref);
  }
  
  Node* prev = curr->prev;
  Node* nxt = curr->next;
  prev->next = curr->next;
  nxt->prev = prev;
  free(curr);
  return (*head_ref);
}