#include <stdio.h>
#include <conio.h>
void main(void){
    int ar[3][3],i,j;   
    printf("input values");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&ar[i][j]);
        }
    }
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
    }