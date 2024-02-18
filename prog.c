#include <stdio.h> 
int main() 
{ long int arr[10]; 
    long int sum,product,i;
    /*To Read array elements*/
    printf("\nEnter elements : \n"); 
    for(i=0; i<10; i++) 
    { 
        printf("Enter arr[%d] : ",i); 
        scanf("%d",&arr[i]); 
    } 
    /*To calculate sum and product*/
    sum=0;
    product=1;
    for(i=0; i<10; i++)
    {
        sum=sum+arr[i];
        product=product*arr[i];
    }
    printf("\nSum of array is     : %d"  ,sum); 
    printf("\nProduct of array is : %d\n",product); 

    return 0;
}
