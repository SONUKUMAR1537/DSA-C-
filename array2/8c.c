#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
struct node {
    char data;
    struct node *left, *right;
};
struct stack {
    struct node* items[100];
    int top;
};
void push(struct stack* s, struct node* n) {
    s->items[++(s->top)] = n;
}
struct node* pop(struct stack* s) {
    return s->items[(s->top)--];
}
struct node* makeNode(char x) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;
}
struct node* createExpressionTree(char postfix[]) {
    struct stack s;
    s.top = -1;
    for (int i = 0; i < strlen(postfix); i++) {
        char x = postfix[i];

        if (isalnum(x)) { // Operand
            struct node* n = makeNode(x);
            push(&s, n);
        } else { // Operator
            struct node* n = makeNode(x);
            n->right = pop(&s);
            n->left = pop(&s);
            push(&s, n);
        }
    }
    return pop(&s); // Root of expression tree
}
void inorder(struct node* root) {
    if (root != NULL) {
        if (!isalnum(root->data)) printf("(");
        inorder(root->left);
        printf("%c", root->data);
        inorder(root->right);
        if (!isalnum(root->data)) printf(")");
    }
}
int main() {
    char postfix[100];
    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    struct node* root = createExpressionTree(postfix);
    printf("Inorder (fully parenthesized) expression: ");
    inorder(root);
    printf("\nName: Sonu kumar");
    printf("\nRoll No: 2400320101114\n");
    return 0;
}

