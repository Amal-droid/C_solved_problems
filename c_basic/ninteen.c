#include <stdio.h>
#include <conio.h>
void main(void){
    int j,i,arr[20],limit,temp;
    printf("enter the limit of the array");
    scanf("%d",&limit);
    printf("enter the  values to sort");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }

      for ( i = 0; i < limit; i++)
    {
        for ( j = i+1; j < limit; j++)
        {
         if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }

        }
        
    }
         for ( i = 0; i < limit; i++)
    {
        printf("%d",arr[i]);
    }     
    }