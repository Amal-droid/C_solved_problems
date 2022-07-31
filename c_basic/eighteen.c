#include <stdio.h>
#include <conio.h>
void main(void){
    int f=0,i,se,arr[20]={1,2,3,4,5,6,7,8,9,0,22,11,33,44,55,32,44,65,34,211,333};
    printf("enter the  value to search");
    scanf("%d",&se);
    for(i=0;i<21;i++){
        if(se==arr[i])
        {
            f=1; 
        break;
        }
        
        }
       if(f==1){
            printf("search element found %d",i);
       } 
        else{
        printf("not found");
    }
    }