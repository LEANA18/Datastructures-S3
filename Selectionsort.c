#include <stdio.h>
int i,j,n,small,ind,a[100];
void read(int[],int);
void sort(int[],int);
void swap(int*,int*);
void display(int[],int);
void main()
{
    printf("Enter number of elements present in the array\n");
    scanf("%d",&n);
    read(a,n);
}
void read(int a[],int n)
{
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
}
void sort(int a[],int n)
{
    for(i=0;i<n-1;i++)
    {
        small=a[i];
        ind=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                ind=j;
            }
        }
        swap(&a[i],&a[ind]);
    }
    display(a,n);
}
void swap(int*p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void display(int a[],int n)
{
    printf("Sorted array is");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
