#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *temp = NULL;

struct node *head = NULL;

struct node *newnode(int x)
{
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}

struct node *insertfirst(int x)
{
    temp = newnode(x);
    if (head == NULL)
        head = temp;
    else
        temp->next = head;
    head = temp;
    temp = NULL;
    return head;
}

struct node *insertlast(int x)
{
    temp = newnode(x);
    struct node *current = head;
    if (head == NULL)
        head = temp;
    else
        while (current->next != NULL)
            current = current->next;
    current->next = temp;
    temp = NULL;
    current = NULL;
    return head;
}

void print(struct node *h)
{
    struct node *current = h;
    while (current != NULL)
    {
        printf("%d", current->data);
        current = current->next;
    }
    printf("\n");
}

void delete(int x)
{
    struct node *current = head;
    while (current->next != NULL && current->next->data != x)
    {
        current = current->next;
    }
    if (current->next != NULL)
    {
        struct node *todelete = current->next;
        current->next = todelete->next;
        free(todelete);
        todelete->next = NULL;
    }
    current=NULL;
}


void main()
{

    print(insertfirst(3));
    print(insertfirst(4));
    print(insertfirst(5));
    print(insertlast(6));
    delete(3);
    print(head);
}