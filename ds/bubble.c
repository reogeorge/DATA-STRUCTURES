#include<stdio.h>

void swap(int a[],int i , int j)
{
    int temp= a[i];
    a[i]=a[j];
    a[j]=temp;
}
void bubble(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
               swap(arr,j,j+1);

        }
    }
}


void main()
{
    int a[]={1,4,5,2,3,7,8};
    bubble(a,7);
    for(int i=0;i<7;i++)
    {
        printf("%d",a[i]);
    }

}