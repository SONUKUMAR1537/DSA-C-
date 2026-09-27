#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right, *parent;
};
struct Node* createNode(int key) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = key;
    n->left = n->right = n->parent = NULL;
    return n;
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
        return r;
    r->parent = q;
    if (key < q->data) q->left = r;
    else q->right = r;
    return root;
}
struct Node* BSTMinimum(struct Node* root) {
    while (root && root->left != NULL)
        root = root->left;
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
int BSTDelete(struct Node* p) {
    if (p == NULL) return -1;
    int x = p->data;
    if (p->left == NULL && p->right == NULL) {
        if (p->parent) {
            if (p->parent->left == p)
                p->parent->left = NULL;
            else
                p->parent->right = NULL;
        }
        free(p);
        return x;
    }
    if (p->left == NULL) {
        struct Node* q = p->right;
        if (p->parent) {
            if (p->parent->left == p)
                p->parent->left = q;
            else
                p->parent->right = q;
        }
        q->parent = p->parent;
        free(p);
        return x;
    }
    if (p->right == NULL) {
        struct Node* q = p->left;
        if (p->parent) {
            if (p->parent->left == p)
                p->parent->left = q;
            else
                p->parent->right = q;
        }
        q->parent = p->parent;
        free(p);
        return x;
    }
    struct Node* q = BSTSuccessor(p);
    int y = BSTDelete(q);
    p->data = y;
    return x;
}
void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
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
    printf("Before Deletion (Inorder): ");
    inorder(root);
    struct Node* nodeToDelete = root->left; // deleting 30
    int deleted = BSTDelete(nodeToDelete);
    printf("\nDeleted: %d\n", deleted);
    printf("After Deletion (Inorder): ");
    inorder(root);
    printf("\n\nName: Sonu kumar");
    printf("\nRoll No: 2400320101114\n");
    return 0;
}
