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

// Recursion function to create a linked list from an array
Node* create_Linked_list(int arr[], int idx, int size){
    if (idx == size)
        return NULL;

    Node *temp = new Node(arr[idx]);
    temp->next = create_Linked_list(arr, idx + 1, size);
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
    int arr[] = {1, 4, 6, 2, 8, 9};
    
    // Create the linked list from the array
    Node *head = create_Linked_list(arr, 0, 6);

    // Print the original linked list (ensure this part is not commented out)
    Node *temp = head;
    cout << "Original List: ";
    while (temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;  // Newline after the original list

    // Reverse the linked list using recursion and update the head
    head = Reverse(head, NULL);  // Assign the new head after reversal

    // Print the reversed linked list
    temp = head;
    cout << "Reversed List: ";
    while (temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;  // Newline after the reversed list
    
    return 0;
}
