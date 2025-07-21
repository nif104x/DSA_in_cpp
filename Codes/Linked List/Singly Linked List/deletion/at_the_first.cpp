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

int main(){
    int arr[] = {2,4,6,7,8};
    Node *head = create_Linked_list(arr,0,5);

    // delete node at the first:a
    if (head!=NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    
    // printing the Linked List
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}