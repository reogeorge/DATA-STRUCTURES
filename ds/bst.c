#include <stdio.h>
#include<stdlib.h>

struct bst
{
    int data;
    struct bst* right;
    struct bst* left; /* data */
};

void inorder(struct bst* root)
{
    if(root==NULL)
        return root;
    inorder(root->left);
    printf("%d",&root->data);   
    inorder(root->right);
}

struct bst *newnode(int x)
{
    struct bst *temp= malloc(sizeof(struct bst));
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
}

struct bst *insert(struct bst* root,int x)
{
    if (root==NULL)
        return newnode(x);
    if (x<root->data)
        root->left=insert(root->left,x);   
    if (x> root->data)
        root->right=insert(root->right,x);  /* data */
}

struct bst * findmin(struct bst* root)
{
    struct bst* current= root;
    while(current && current->left !=NULL)
        current=current->left;
    return current;
}


struct bst *deleteleaf(struct bst*root , int x)
{
    if(root==NULL)
        return root;
    
    if (x< root->data)
        root->left=deleteleaf(root->left,x);
    else if(x> root->data)
        root->right=deleteleaf(root->right,x);
    
    else{
        struct bst* temp;
        if(root->left==NULL){
            temp =  root->right;
            free(root);
            return temp;
        }
        else if (root->right==NULL){
            temp= root->left;
            free(root);
            return temp;
        }
    temp= findmin(root->right);
    root->data=temp->data;
    root->right=deleteleaf(root->right,temp->data);
    }
}

void main()
{
    struct bst* root= NULL;
    insert(root,3);
    insert(root,4);
    insert(root,2);
    insert(root,5);
    inorder(root);
    deleteleaf(root,4);
    inorder(root);

}
