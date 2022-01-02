#include<stdio.h>
int i, j,temp,n,a[100]; 

void bubble(int[],int);
void print(int[],int);
void main ()    
{    
        
    printf("Enter the number of elements present in the array\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a, n);  
    printf("\nAfter sorting, array elements are - \n");    
    print(a, n);  
}    

void bubble(int a[], int n) 
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  
void print(int a[], int n) 
{  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
}
