#include <stdio.h>
#include <conio.h>
void main(void){
int num;
printf("Enter a number to check");
scanf("%d",&num);
if (num<=0)
{
    printf("number is greater than 0");
    printf("");
}
else{
 printf("Number is negative");
}
}