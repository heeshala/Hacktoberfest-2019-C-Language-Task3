#include <stdio.h>

void main()
{
    int i,arr[10];
        printf("Input 10 elements in the array :\n"); 
            for(i=0;i<10;i++)
            {
            printf("Enter a number to array :");
            scanf("%d",&arr[i]);
            }

        printf("\nElements in the array : ");  
            for(i=0; i<10; i++)  
            {  
            printf("%d  ",arr[i]);  
            } 
        printf("\n");
}

void main()
{
    int n,i;
        printf("Input number of elements need to be in the array :");
        scanf("%d",&n);
    
    int arr[n];
        printf("Input %d number of elements in the array\n",n);
            for(i=0;i<n;i++){
            printf("Enter a number to array :");
            scanf("%d",&arr[i]);}

        printf("\n\nThe values in the array in reverse :");
             for(i=n-1;i>=0;i--)
              {
        	   printf("% 5d",arr[i]);
        	  }
        printf("\n\n");
} 
