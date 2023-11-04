// Check A Number Is Positive Or Negative...
#include<stdio.h>
int main()    {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if( a > 0)    {
    printf("The number is a positive number");
    }else if(a == 0)    {
    printf("The number is neither negative nor positive");
    }else    {
    printf("The number is a negative number");
    }
return 0;
}