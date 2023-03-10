#include <stdio.h>
#include <stdlib.h>

int *merge(int a[], int m, int b[], int n)
{
    int i = 1, j = 1, k = 1;
    int *C = malloc((m + n + 1) * sizeof(int));
    while (i <= m && j <= n)
        if (a[i] < b[j])
            C[k++] = a[i++];
        else
            C[k++] = b[j++];
    while (i <= m)
        C[k++] = a[i++];
    while (j <= n)
        C[k++] = b[j++];
    return C;
}

int *mergesort(int a[], int l, int r)
{
    if (l >= r)
        return a + l - 1;
    int m = (l + r) / 2;
    return (merge(mergesort(a, l, m), m - l + 1, mergesort(a, m + 1, r), r - m));
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
printarray(mergesort(a,1,n),1,n);
}