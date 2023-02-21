#include<stdio.h>

int binarysearch(int arr[],int l ,int r , int x)
{
    int m,p;
    while (l<=r)
    {
        m=l+r/2;
        p=arr[m];
        if(p>x)
            r=m-1;
        else if (p<x)
            l=m+1;
        else
            return m;
        
    }
    return -1;
}

void main()
{
    int arr[]={1,2,3,4,5,7,43,88};
    int p=binarysearch(arr,0,7,88);
    if (p==-1)
        printf("oomb");
    else
        printf("%d",p+1);
}