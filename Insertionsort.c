#include <stdio.h>

int i,j,temp,n,a[100];
void insert(int[],int);
void print(int[],int);

void main()  
{  
    printf("Enter the no of elements present in the array\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insert(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
}    
void insert(int a[], int n)  
{  
    for (i = 1; i < n; i++)
    {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])    
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void print(int a[], int n) 
{  
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);  
    }
}  
