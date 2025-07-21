#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //Constructor Declaration
    Node(int);
};

// Creating the Constructor
Node::Node(int x){ 
    data = x;
    next = NULL;
}


int main() {
    Node *head;
    head = NULL;

    int arr[] = {1,2,4,6,8,10};

    for (int i = 0; i < 6; i++)
    {
        if(head == NULL){
            head = new Node(arr[i]);
        }
        else{
            Node *temp;
            temp = new Node(arr[i]);
            temp -> next = head;
            head = temp;
        }
    }
    
    //Printing the Linked List
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}