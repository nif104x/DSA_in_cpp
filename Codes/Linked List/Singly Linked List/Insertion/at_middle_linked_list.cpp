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
    int arr[] = {1,2,3,4,5};
    Node *head = create_Linked_list(arr,0,5);

    int position = 3;
    Node *temp = head; // creating a copy

    Node *elem = new Node(555);

    while(position>2){
        temp = temp->next;
        position--;
    }

    elem->next = temp->next;
    temp->next = elem;

    // printing the linked list
    temp = head;
    while (temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp->next;
    }
}