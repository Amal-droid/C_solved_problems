#include <stdio.h>
#include <conio.h>
void sum();
void sum2(int,int);
int sum3();
int sum4();
void sum(){
    printf("this is sum function\n");
}
void sum2(int num1,int num2){
    printf("sum2 got values a=%d,b=%d\n",num1,num2);
}
int sum3(int num1,int num2){
    int res;
    res=num1+num2;
    return res;
}
int sum4(){
    int value =6;
    return value;
}
void main(void){
    int a=2,b=3,value,value2;
    sum();
    sum2(a,b);
    value=sum3(a,b);
    value2=sum4();
    printf("sum 3 returned value =%d\n",value);
    printf("sum 4 returned value =%d",value2);
}
