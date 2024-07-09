//Expression Tree Traversals
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct node {
char data;
struct node *left;
struct node *right;
} Node;
Node* createNode(char data) {
Node* newNode = (Node*)malloc(sizeof(Node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
Node* insert(Node* root, char data) {
if(root == NULL) {
root = createNode(data);
} else if(isdigit(data)) {
root->right = insert(root->right, data);
} else {
root->left = insert(root->left, data);
}
return root;
}
void preorder(Node* root) {
if(root != NULL) {
printf("%c ", root->data);
preorder(root->left);
preorder(root->right);
}
}
void inorder(Node* root) {
if(root != NULL) {
inorder(root->left);
printf("%c ", root->data);
inorder(root->right);
}
}
void postorder(Node* root) {
if(root != NULL) {
postorder(root->left);
postorder(root->right);
printf("%c ", root->data);
}
}
int main() {
Node* root = NULL;
root = insert(root, '+');
root = insert(root, '3');
root = insert(root, '*');
root = insert(root, '5');
root = insert(root, '2');
printf("Preorder Traversal: ");
preorder(root);
printf("\nInorder Traversal: ");
inorder(root);
printf("\nPostorder Traversal: ");
postorder(root);
printf("\n");
return 0;
}
