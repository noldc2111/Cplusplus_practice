#include "bst_class.h"


int main(){

    BST b;
    
    Node *root = NULL;
    b.insert(root,8);
    b.insert(root,10);
    b.insert(root,1);
    b.display_all(root);
    int found = b.find(root,10);
    cout << "I've been found: " << found << endl;
    int h = b.height_tree(root);
    cout << h << endl;
}
