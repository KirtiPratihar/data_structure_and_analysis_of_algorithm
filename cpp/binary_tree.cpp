#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildtree(node* root){
    int data;
    cout << "Enter the data: ";
    cin >> data;

    if(data == -1){
        return NULL;
    }

    root = new node(data);

    cout << "Enter data for inserting left of " << data << ": ";
    root->left = buildtree(root->left);

    cout << "Enter data for inserting right of " << data << ": ";
    root->right = buildtree(root->right);

    return root;
}

int main(){
    node* root = NULL;

    // creating a tree
    root = buildtree(root);
    return 0;
}
