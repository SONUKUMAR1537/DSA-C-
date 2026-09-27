#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right;
};
struct Node* createNode(int key) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = key;
    n->left = n->right = NULL;
    return n;
}
struct Node* insert(struct Node* root, int key) {
    if (root == NULL) 
        return createNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}
struct Node* BST_Minimum(struct Node* root) {
    struct Node* p = root;
    while (p->left != NULL)
        p = p->left;
    return p;
}
struct Node* BST_Maximum(struct Node* root) {
    struct Node* p = root;
    while (p->right != NULL)
        p = p->right;
    return p;
}
int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
    struct Node* minNode = BST_Minimum(root);
    struct Node* maxNode = BST_Maximum(root);
    printf("BST Minimum: %d\n", minNode->data);
    printf("BST Maximum: %d\n", maxNode->data);
    printf("\nName: Sonu kumar");
    printf("\nRoll No: 2400320101114\n");
    return 0;
}
