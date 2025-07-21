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


int main() {
    int arr[] = {1,2,3,4,5};
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }  
    }

    // printing the linked list
    Node *temp = head;
    while (head != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp->next;
    }
    return 0;
}

// Using the recursion:

// int main(){
//     int arr[] = {1,2,3,4,5};
//     Node *head = NULL;
//     head = create_Linked_list(arr, 0,5);
//     // printing the linked list
//     Node *temp = head;
//     while (head != NULL)
//     {
//         cout<< temp -> data << " ";
//         temp = temp->next;
//     }
//     return 0;
    
// }