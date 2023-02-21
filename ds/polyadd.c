#include<stdio.h>

int findmin(int a , int b){
    if (a>b)
        return b;
    return a;
}
void addition(int a[],int m, int b[],int n, int c[])
{
    int i;
    int s= findmin(m,n);
    for(i=0;i<s;i++)
    {
        c[i]=a[i]+b[i];
    }
    for(i=s;i<m;i++)
    {
        c[i]=a[i];
    }
    for(i=s;i<n;i++)
    {
        c[i]=b[i];
    }
}
void printarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d+x^%d  ", a[i],i);
    }
}
void main()
{
    int a[]={1,0,0,3,2,4,5};
    int b[]={1,0,2,3};
    int c[11];
    addition(a,7,b,4,c);
    printarray(c,11);
}