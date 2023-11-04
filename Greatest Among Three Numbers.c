// Greatest Among Threeo Numbers...
#include<stdio.h>
int main()    {
    int num1, num2, num3;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3) {
    printf("The Greatest number is: %d",num1);
    }else if(num2>num1 && num2>num3)    { 
    printf("The Greatest number is: %d",num2); 
    }else if(num3>num1 && num3>num2)    {
    printf("The Greatest number is: %d",num3);
    }else if(num1 == num2 && num1>num3 && num2>num3)    {
    printf("The FIRST and SECONDumber are SAME\n");
    printf("The Greatest number is: %d",num1);
    }else if(num2 == num3 && num2>num1 && num3>num1)    {
    printf("The SECOND and THIRD number are SAME\n");
    printf("The Greatest number is: %d",num2);
    }else if(num3 == num1 && num3>num2 && num1>num2)    {
    printf("The THIRD and FIRST number are SAME\n");
    printf("The Greatest number is: %d",num3);
    }else    {
    printf("All three numbers are SAME");
    }
return 0;
}