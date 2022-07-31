#include <stdio.h>
#include <conio.h>
void main(){
     int i,num,sum=0;
     printf("enter a number");
     scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==1){
            sum=sum+i;
        }       
    }
    printf("sum of odd number =%d",sum);
}

   