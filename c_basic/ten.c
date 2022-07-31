#include <stdio.h>
#include <conio.h>
void main(void){
int num,num2,op,res;
printf("Enter two number");
scanf("%d%d",&num,&num2);
printf("enter the operant");
printf("1=+,2=-,3=*,4=/");
scanf("%d",&op);
if(op==1)
{
    res=num+num2;
    printf("%d",res);
}

else if(op==2){
    res=num-num2;
    printf("%d",res);
}
else if(op==3)
{
        res=num*num2;
    printf("%d",res);
}
else if (op==4)
    {
     res=num/num2;
    printf("%d",res);
    }
    
    else{
        printf("enter a appropriate value");
    }
}