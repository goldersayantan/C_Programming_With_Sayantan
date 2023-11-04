// Greatest Among Two Numbers...
#include<stdio.h>
int main()    {
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    if(a>b) {
    printf("The Greatest number is: %d",a);
    }else if(a == b)    { 
    printf("The numbers are same");
    }else   {
   printf("The Greatest number is: %d",b); 
   }
return 0;
}