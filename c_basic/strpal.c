#include <stdio.h>
#include <conio.h>
void main(void){
    char str[20],str1[20],flag=0;
    int i,j,len=0;
    printf("Enter a string to check palindeome or not\n");
    scanf("%s",&str);
    len=strlen(str);
      for ( i = 0; i<len; i++){
           if(str[i]!=str[len-i-1])
           {
            flag=1;
            break; 
           }
    }
    if(flag){
        printf("the string is not palindrome");
    }else
    {
        printf("the string is  palindrome");
    }
}