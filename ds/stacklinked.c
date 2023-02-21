#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* top=NULL;
node* temp=NULL;

node* newnode(int x){
    node *temp =(node *)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    return temp;
}

void push(int x){
    temp=newnode(x);
    if (top==NULL){
        top=temp;
    }
    else{
        temp->next=top;
        top=temp;
    }
    temp=NULL;
}

void print()
{
    struct node *current = top;
    while (current != NULL)
    {
        printf("%d", current->data);
        current = current->next;
    }
    printf("\n");
}

int pop()
{
    if(top!=NULL){
        int x= top->data;
        temp=top;
        top=top->next;
        free(temp);
        temp=NULL;
        return x;
    }
    
}

void main()
{
    push(3);
    print();
    push(4);
    print();
    push(5);
    print();
    printf("%d\n",pop());
    print();
    
    

}