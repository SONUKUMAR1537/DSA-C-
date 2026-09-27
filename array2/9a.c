#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right, *parent;
};
struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->left = newNode->right = newNode->parent = NULL;
    return newNode;
}
struct Node* BSTMinimum(struct Node* root) {
    struct Node* p = root;
    while (p && p->left != NULL)
        p = p->left;
    return p;
}
struct Node* BSTMaximum(struct Node* root) {
    struct Node* p = root;
    while (p && p->right != NULL)
        p = p->right;
    return p;
}
struct Node* BSTSearch(struct Node* root, int key) {
    struct Node* p = root;
    while (p != NULL) {
        if (key == p->data)
            return p;
        else if (key < p->data)
            p = p->left;
        else
            p = p->right;
    }
    return NULL;
}
struct Node* BSTInsert(struct Node* root, int key) {
    struct Node *p = root, *q = NULL;
    struct Node* r = createNode(key);
    while (p != NULL) {
        q = p;
        if (key < p->data)
            p = p->left;
        else
            p = p->right;
    }
    if (q == NULL)
        root = r;
    else if (key < q->data)
        q->left = r;
    else
        q->right = r;
    r->parent = q;
    return root;
}
struct Node* BSTSuccessor(struct Node* p) {
    if (p->right != NULL)
        return BSTMinimum(p->right);
    struct Node* q = p->parent;
    while (q != NULL && q->right == p) {
        p = q;
        q = q->parent;
    }
    return q;
}
struct Node* BSTPredecessor(struct Node* p) {
    if (p->left != NULL)
        return BSTMaximum(p->left);
    struct Node* q = p->parent;
    while (q != NULL && q->left == p) {
        p = q;
        q = q->parent;
    }
    return q;
}
int main() {
    struct Node* root = NULL;
    root = BSTInsert(root, 50);
    root = BSTInsert(root, 30);
    root = BSTInsert(root, 70);
    root = BSTInsert(root, 20);
    root = BSTInsert(root, 40);
    root = BSTInsert(root, 60);
    root = BSTInsert(root, 80);
    printf("Min in BST: %d\n", BSTMinimum(root)->data);
    printf("Max in BST: %d\n", BSTMaximum(root)->data);
    struct Node* s = BSTSearch(root, 40);
    printf("Search 40: %s\n", s ? "Found" : "Not Found");
    struct Node* succ = BSTSuccessor(s);
    if (succ) printf("Successor of 40: %d\n", succ->data);
    struct Node* pred = BSTPredecessor(s);
    if (pred) printf("Predecessor of 40: %d\n", pred->data);
    printf("\nName: Sonu kumar");
    printf("\nRoll No: 2400320101114\n");
    return 0;
}

