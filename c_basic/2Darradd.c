#include <stdio.h>
#include <conio.h>
int main(){
    int arr[3][3],arr1[3][3],res[3][3],i,j;
    printf("enter first array elements\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){   
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter second array elements\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){   
            scanf("%d",&arr1[i][j]);
        }
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){   
           res[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    printf("result is...\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){   
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
    
}