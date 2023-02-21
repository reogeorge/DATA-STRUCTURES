#include<stdio.h>

int size=10;

int a[10];
int f=-1,r=-1;

int isempty(){
    if (f==-1 && r==-1)
        return 1;
    return 0;

}
void enque(int x)
{
    r=(r+1)%size;
    if(f=-1)
        f=0;
    a[r]=x;
}

int deque(){
    int x=a[f];
    if(f==r)
        f=r=-1;
    else
        f=(f+1)%size;
}

void print(){
    if(isempty())
        printf("empty");
    else
    {
        for(int i=f;i!=r;(i+1)%size)
            printf("%d",a[i]);
        printf("%d",a[r]);
    }
}