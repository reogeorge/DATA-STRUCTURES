#include<stdio.h>

void swap(int a[],int i , int j)
{
    int temp= a[i];
    a[i]=a[j];
    a[j]=temp;
}

void insertion(int a[],int n)
{
    int small,i,j;
    for (i=1;i<n;i++)
    {
        small=a[i];
        for (j=i-1;j>=0;j--)
            if (a[j]>small)
                a[j+1]=a[j];
            else
                break;
       a[j+1]=small;
    }
}

void main()
{
    int a[]={1,4,5,2,3,7,8};
    insertion(a,7);
    for(int i=0;i<7;i++)
    {
        printf("%d",a[i]);
    }

}