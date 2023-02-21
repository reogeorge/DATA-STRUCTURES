#include<stdio.h>

void swap(int a[], int i , int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void maxheapify(int a[],int n , int root)
{
    int l= 2*root;
    int r= 2*root+1;
    int max= root;
    if(l<n && a[l]>a[max])
    max=l;
    if(r<n && a[r]>a[max])
    max=r;
    if(max != root)
    {
        swap(a,root,max);
        maxheapify(a,n,max);
    }

}

void buildmaxheap(int a[],int n)
{
    for (int i=n/2; i>=0;i--)
        maxheapify(a,n,i);
}

void heapsort(int a[],int n){
    buildmaxheap(a,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(a,0,i);
        maxheapify(a,i,0);
    }
}

void printarray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}

void main()
{
    int a[]={1,6,2,5,3};
    int n=5;
    heapsort(a,n);
    printarray(a,n);
}