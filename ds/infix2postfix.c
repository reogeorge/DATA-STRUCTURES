#include<stdio.h>

int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
        if(arr[i]==x)
            return i;
    return -1;
}
void main()
{
    int arr[]={1,2,3,4,5,7,88,43,6};
    int n=9;
    int p=search(arr,9,2);
    if (p==-1)
        printf("oomb");
    else
        printf("%d",p+1);
}