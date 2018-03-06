#include<cctype>
#include<cstring>
#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

struct Node{
    Node *left;
    Node *right;
    int data;
};

class BST{

    public:
        BST();
        BST(const BST &);
        ~BST();

        void insert(Node *&root, int val);
        void display_all(Node *root);
        int find(Node *root,int val);
        int height_tree(Node *root);

    private:
        Node *root;
};


BST::BST(const BST& tree){
   Node *root = NULL;
}

BST::BST(){}

BST::~BST(){}

void BST::insert(Node *&root,int val){

    if(!root){
        root = new Node;
        root->data = val;
        root->left = NULL;
        root->right = NULL;
    }else if(root->data >= val){
        insert(root->left,val);
    }else
        insert(root->right,val);
}

void BST::display_all(Node *root){

    if(root){
        display_all(root->left);
        cout << root->data << endl;
        display_all(root->right);
    }
}

int BST::find(Node *root, int val){

    if(!root)
        return -9;
    int curr = root->data;
    if(curr == val)
        return curr;
    else if(curr > val)
        return find(root->left,val);
    else
        return find(root->right,val);
}

int BST::height_tree(Node *root){

    if(!root)
        return 0;
    return 1 + max(height_tree(root->left),height_tree(root->right));


}
