# include <stdio.h>
#include <conio.h>
void main(){
  int i,n,f=0;
//  for(i=0;i<=100;i++)
//  {
//     printf("%d\t",i);
//  }


// printf("enter a number");
// scanf("%d",&n);
// for(i=0;i<n;i++)
// {
//     sum=sum+i;
// }
// printf("%d",sum);
// }

// printf("enter a number");
// scanf("%d",&n);
// for(i=0;i<n;i++){
//     if(i%2==0)
//     {
//         printf("%d\n",i);
//         }
// }

n=11;
for(i=2;i<n/2;i++)
{
    if(n%i==0){
        f=1;
        break;
    }
}
if(f==0){
    printf("%d number is  prime",n);
}
else
{printf("%d not prime",n);}

}