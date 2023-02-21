#include<stdio.h>

int partition(int a[], int p , int r)
{
    int value,pointer,i;
    value= a[p];
    pointer=p;
    for(i=p+1;i<=r;i++)
        if(a[i]<value){
            a[pointer++]=a[i];
            a[i]=a[pointer];
        }
    a[pointer]=value;
    return pointer;
}

void quicksort(int a[],int l , int r)
{
    int p;
    if(l<r)
    {
        p=partition(a,l,r);
        quicksort(a,p+1,r);
        quicksort(a,l,p-1);
    }
}
void printarray(int a[], int l, int r)
{
    int i;
    for (i = l; i <= r; i++)
    {
        printf("%d", a[i]);
    }
}

void main ()
{     int n,i;
printf("Enter the limits\n");
scanf("%d",&n);
int a[n];
printf("Enter the array elements\n");
for (i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("Sorted array is : \n");
quicksort(a,1,n);
printarray(a,1,n);
}