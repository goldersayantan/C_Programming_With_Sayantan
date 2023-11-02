// Simple calculator...
# include <stdio.h>
int main()    {
    int num1, num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    char ch;
    printf("Enter the operator ( +, -, *, /, %) :");
    scanf(" %c",&ch);
    if( ch == '+' )    {
        printf("The Addition of %d and %d is: %d",num1, num2,(num1+num2));
    }else if( ch == '-' )    {
        printf("The Subtraction of %d and %d is: %d",num1, num2,(num1-num2));
    }else if( ch == '*' )    {
        printf("The Multiplication of %d and %d is: %d",num1, num2,(num1*num2));
    }else if( ch == '/' )    {
        printf("The Division of %d and %d is: %d",num1, num2,(num1/num2));
    }else if( ch == '%' )    {
        printf("The Modulation of %d and %d is: %d",num1, num2,(num1%num2));
    }else    {
        printf("This is not a valid operator");
    }
 return 0;
 }