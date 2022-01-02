#include <stdio.h>
int a[100],flag=0, search, i, n;
void read(int[],int);
void linearsearch(int[],int,int);
void print(int[],int);
void main()
{
    read(a,n);
}
void read(int a[],int n)
{
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a number to search\n");
    scanf("%d", &search);
    linearsearch(a,n,search);
}
void linearsearch(int a[],int n,int search)
{
    for (i = 0; i < n; i++)
    {
        if (a[i] == search)     
        {
            flag=1;
            break;
        }
    }
    print(a,flag);
}
void print(int a[],int flag)
{
    if(flag==1)
    {
         printf("%d is present at location %d.\n", search, i+1);
    }
    else
    {
        printf("%d isn't present in the array.\n", search);
    }
}
