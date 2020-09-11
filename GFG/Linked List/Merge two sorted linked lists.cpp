// https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1/?track=amazon-linkedlists&batchId=192

#include<iostream>
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

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

Node* sortedMerge(Node* head_A, Node* head_B)  
{  // The commented code is O(mn) solution.


    // code here
    // Node first(-1);
    // Node* last = &first;
    // if(head_A==NULL)
    // {
    //     return head_B;
    // }
    // if(head_B==NULL)
    // {
    //     return head_A;
    // }
 
//     while(curr)
//     {
//         Node* start = head_B;
//         if(curr->data > start->data)
//         {
//             int data = curr->data;
//             curr->data = start->data;
//             start->data = data;
//             Node* temp = start; 
            
//             while(temp->next && (data > temp->next->data))
//             {
//                 temp->data = temp->next->data;
//                 temp = temp->next;
//             }
//             temp->data = data;
//         }
//         prev = curr;
//         curr = curr->next;
//     }
//     prev->next = head_B;
//     return head_A;

    Node* start,*last;
    if(head_A->data < head_B->data)
    {
        start = head_A;
        last = start;
        head_A = head_A->next;
    }
    else{
        start = head_B;
        last = start;
        head_B = head_B->next;
    }
    while(head_A && head_B)
    {
    if(head_A->data < head_B->data)
        {
            last->next = head_A;
            last = last->next;
            head_A = head_A->next;
        }
    else{
            last->next = head_B;
            last = last->next;
            head_B = head_B->next;
    }
    }
    
    if(head_A)
        last->next = head_A; 
    if(head_B)
        last->next = head_B;
        
    return start;
}