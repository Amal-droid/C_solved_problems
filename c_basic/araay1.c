#include <stdio.h>

int main()
{
    int i,j,count=0,ar[10];
    printf("enter the elements in the array");
    for(i=0;i<5;i++){
        scanf("%d",&ar[i]);}
        
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++)
        if(ar[i]==ar[j]){
            count++;
        }
    }
printf("duplicate elements are   %d",count);
    return 0;
}
