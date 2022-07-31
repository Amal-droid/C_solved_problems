#include <stdio.h>
#include <conio.h>
void main(void){
    int option;
    printf("1:porotta \n 2:biriyani,\n3:fried rice,\n4:mandhi\n");
    printf("enter your choice");
    scanf("%d",&option);
    switch (option)
    {
    case 1:printf("you have selected porotta");
        break;
    case 2:printf("you have selected biriyani");
        break;

    case 3:printf("you have selected fried rice");
        break;

    case 4:printf("you have selected mandhi");
        break; 

    default:
    printf("nothing selected");

    }
}