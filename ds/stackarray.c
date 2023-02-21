#include<stdio.h>

const int size = 10;
int a[10];
int top =-1;

int push(int n)
{
    if(top<size){
        a[++top]=n;
        return 1;
    }
    return 0;
}

int pop()
{
    if(top>-1){
        int temp= top;
        top--;
        printf("%d",a[temp]);
    }
}

void main()
{
    push(3);
    push(4);
    push(5);
    pop();
    push(6);
    pop();
    pop();
    pop();
}