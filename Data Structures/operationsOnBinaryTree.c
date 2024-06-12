//Operations on Binary Tree
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
int data;
struct node *left;
struct node *right;
} Node;
Node* createNode(int data) {
Node* newNode = (Node*)malloc(sizeof(Node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
Node* insert(Node* root, int data) {
if(root == NULL) {
root = createNode(data);
} else if(data <= root->data) {
root->left = insert(root->left, data);
} else {
root->right = insert(root->right, data);
}
return root;
}
void inorder(Node* root) {
if(root != NULL) {
inorder(root->left);
printf("%d ", root->data);
inorder(root->right);
}
}
int main() {
Node* root = NULL;
root = insert(root, 15);
root = insert(root, 10);
root = insert(root, 20);
root = insert(root, 25);
root = insert(root, 8);
root = insert(root, 12);
printf("Inorder Traversal: ");
inorder(root);
printf("\n");
return 0;
}
