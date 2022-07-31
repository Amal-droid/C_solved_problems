#include <stdio.h>
#include <conio.h>
void main(void){
    int P;
    float n,r,SI;
    printf("Enter the rate of interest,principle amount and the number of years");
    scanf("%f%d%f",&r,&P,&n);
    SI=(P*n*r)/100;
    printf("Simple interest is = %f",SI);
}