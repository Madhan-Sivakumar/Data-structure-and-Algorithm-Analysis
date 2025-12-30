#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int value){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node *createtree(){
    int value;
    printf("ENTER NODE VALUE(-1 FOR NO NODE): ");
    scanf("%d",&value);
    if(value == -1){
        return NULL;
    }
    struct node *root = createnode(value);
    printf("ENTER LEFT CHILD OF %d\n", value);
    root->left = createtree();
    printf("ENTER RIGHT CHILD OF %d\n", value);
    root->right = createtree();
    return root;
}

void preorder(struct node *root){
    if(root != NULL){
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    struct node *root;
    printf("CREATE BINARY TREE\n");
    root = createtree();
    printf("\nPREORDER TRAVERSAL: ");
    preorder(root);
    return 0;
}
