#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left, *right;
};
struct node* makeNode(int x) {
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void createTree(struct node* tree) {
    int choice, x;
    printf("Whether Left of %d exists (1/0): ", tree->data);
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Input the information of Left node: ");
        scanf("%d", &x);
        struct node* p = makeNode(x);
        tree->left = p;
        createTree(p);
    }
    printf("Whether Right of %d exists (1/0): ", tree->data);
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Input the information of Right node: ");
        scanf("%d", &x);
        struct node* p = makeNode(x);
        tree->right = p;
        createTree(p);
    }
}
int countNodes(struct node* root) {
    if (root == NULL)
        return 0;
    else
        return 1 + countNodes(root->left) + countNodes(root->right);
}
int main() {
    int x;
    printf("Enter Root Node: ");
    scanf("%d", &x);
    struct node* root = makeNode(x);
    createTree(root);
    int total = countNodes(root);
    printf("\nTotal number of nodes in the tree: %d\n", total);
    printf("\nName: Sonu kumar");
    printf("\nRoll No: 2400320101114\n");
    return 0;
}
