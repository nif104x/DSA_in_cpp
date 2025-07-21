#include<iostream>
#include<queue>

using namespace std;

// Making ther class of the tree:
class Node{
    public:
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

// using the recursion
Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node *temp = new Node(x);
    cout<<"Enter the left child of "<<x<<": ";
    temp->left = BinaryTree();

    cout<<"Enter the right child of "<<x<<": ";
    temp->right = BinaryTree();

    return temp;  
}
// Pre-Order Traversal:
void preOrder(Node *root){
    if(root == NULL)
    return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

// In-Order Traveral:
void inOrder(Node *root){
    if(root == NULL)
    return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

// Post-Order Traversal:
void postOrder(Node *root){
    if(root == NULL)
    return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
// Level Order Traversal:
void levelOrder(Node *root) {    
    queue<Node*>q;
    q.push(root);
    
    Node *temp;
    
    while(!q.empty()){
        
        temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        
        if(temp->left)
        q.push(temp->left);
        
        if(temp->right)
        q.push(temp->right);
    }
}

int main() {
    Node *root;
    cout<<"Enter the root Node: ";
    root = BinaryTree();

    //pre order traversal:
    cout<<"Pre-Order: ";
    preOrder(root);
    cout<<endl;

    // In-Order Traversal:
    cout<<"In-Order: ";
    inOrder(root);
    cout<<endl;

    // Post-Order Traversal:
    cout<<"Post-Order: ";
    postOrder(root);
    cout<<endl;
    // Level Order Traversal:
    cout<<"Level-Order: ";
    levelOrder(root);

    return 0;
}