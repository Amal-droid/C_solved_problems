#include <stdio.h>
#include <conio.h>
void main(){
    int i,j,n=10;
//     for(i=0;i<n;i++){
//         for(j=0;j<i;j++){
//          printf("*");
//         }
//         printf("\n");
//     }

for(i=0;i<10;i++)
{
    for(j=0;j<n-i;j++)
    {
        printf("*");
    }
    printf("\n");   
}


}