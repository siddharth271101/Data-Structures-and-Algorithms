// https://practice.geeksforgeeks.org/problems/swap-kth-node-from-beginning-and-kth-node-from-end-in-a-singly-linked-list/1

#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

// Should swap Kth node from beginning and Kth
// node from end in list and return new head.
Node *swapkthnode(Node* head, int num, int K)
{
    
    Node* start = head;

    if(head==NULL) return NULL;
    
    if(head->next == NULL || K>num){
        return head;
    }
    int c = 1;
    while(start!=NULL){
        if(c == K){
            break;
        }
    c++;
        start = start->next;
    }
    Node* temp = head;
    Node* nextnode = head;
    Node* pre = NULL;
    while(nextnode!=NULL){
    nextnode = nextnode->next;
    temp->next = pre;
    pre = temp;
    temp = nextnode;
    
    }
    head = pre;
    Node* end = head;
    int count = 1;
    while( end != NULL){
    if(count == K){
    break;
    }
    count++;
    
    end = end->next;
    }
    int a = start->data;
    start->data = end->data;
    end->data = a;
    return head;
}