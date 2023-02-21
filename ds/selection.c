#include<stdio.h>

void swap(int a[],int i , int j)
{
    int temp= a[i];
    a[i]=a[j];
    a[j]=temp;
}
void select(int arr[],int n)
{
    int small;
    for(int i=0;i<n-1;i++)
    {
        small=i;
        for(int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[small])
                small=j;

        }

        swap(arr,i,small);
    }
}


void main()
{
    int a[]={1,4,5,2,3,7,8};
    select(a,7);
    for(int i=0;i<7;i++)
    {
        printf("%d",a[i]);
    }

}