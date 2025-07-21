#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

// Recursion function using:
Node* create_Linked_list(int arr[], int idx, int size){
    //Base condition:
    if (idx == size)
    return NULL;

    Node *temp = new Node(arr[idx]);
    temp -> next = create_Linked_list(arr, idx+1, size);
    return temp;
}


// Recursion function to reverse the linked list
Node* Reverse(Node *curr, Node *prev){
    if(curr == NULL)
        return prev;  // Base case: when current is NULL, return previous node as the new head

    Node *fut = curr->next;  // Store the next node
    curr->next = prev;  // Reverse the current node's next pointer
    return Reverse(fut, curr);  // Recursively call for the next node
}


int main(){
    int arr[] = {1,4,6,2,8,9};
    Node *head = create_Linked_list(arr,0,6);

    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    // reverse linked list
    // Node *curr = head, *prev = NULL, *fut = NULL;
    
    // while (curr)
    // {
    //     fut = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = fut;
    // }

    // head = prev;

    // USING THR RECURSION FUNCTION:

    head = Reverse(head, NULL);


    temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;
}