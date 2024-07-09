//Operations on Binary Search Tree
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
} else if(data < root->data) {
root->left = insert(root->left, data);
} else {
root->right = insert(root->right, data);
}
return root;
}
Node* search(Node* root, int data) {
if(root == NULL || root->data == data)
return root;
else if(data < root->data)
return search(root->left, data);
else
return search(root->right, data);
}
Node* findMin(Node* root) {
while(root->left != NULL) root = root->left;
return root;
}
Node* delete(Node* root, int data) {
if(root == NULL) return root;
else if(data < root->data) root->left = delete(root->left, data);
else if(data > root->data) root->right = delete(root->right, data);
else {
// Case 1: No child
if(root->left == NULL && root->right == NULL) {
free(root);
root = NULL;
}
// Case 2: One child
else if(root->left == NULL) {
Node *temp = root;
root = root->right;
free(temp);
}
else if(root->right == NULL) {
Node *temp = root;
root = root->left;
free(temp);
}
// Case 3: Two children
else {
Node *temp = findMin(root->right);
root->data = temp->data;
root->right = delete(root->right, temp->data);
}
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
root = insert(root, 50);
root = insert(root, 30);
root = insert(root, 70);
root = insert(root, 20);
root = insert(root, 40);
root = insert(root, 60);
root = insert(root, 80);
printf("Inorder Traversal: ");
inorder(root);
printf("\n");
root = delete(root, 20);
printf("After deletion of 20\n");
inorder(root);
printf("\n");
root = delete(root, 30);
printf("After deletion of 30\n");
inorder(root);
printf("\n");
root = delete(root, 50);
printf("After deletion of 50\n");
inorder(root);
printf("\n");
return 0;
}
