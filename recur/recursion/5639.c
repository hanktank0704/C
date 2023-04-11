#include <stdio.h>
#include <stdlib.h>

typedef struct tree_node { 
    int data;
    struct tree_node * left;
    struct tree_node * right;
}tree_node;

tree_node * root;

tree_node * insert(tree_node * root, int data){
    // tree_node * root;
    if(root == NULL){
        root = malloc(sizeof(tree_node));
        root->left = NULL;
        root->right = NULL;
        root->data = data;

        return root;
    }
    else{
        if(data > root->data){
            root->right = insert(root->right, data);
        }
        else{
            root->left = insert(root->left, data);
        }
    }
    return root;
}

void print_tree(tree_node * root){
    if(root == NULL){
        return;
    }
    print_tree(root->left);
    print_tree(root->right);
    printf("%d ",root->data);
}


int main(){

    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        int temp;
        scanf("%d", &temp);
        root = insert(root, temp);
    }

    print_tree(root);

    return 0;
}