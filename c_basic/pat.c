#include <stdio.h>

void main()
{
    int i,j,n=16;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<=i*2;j++)
        {
            printf("* ");
        }
        printf("\n");
        for(j=0;j<i*3;j++){
            printf("*\n");
        }

    }
    }