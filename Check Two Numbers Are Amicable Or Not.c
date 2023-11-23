// Check Two Numbers Are Amicable Or Not...
# include <stdio.h>
int main()    {
    int num1, num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    int sum1 =0;
    int sum2 =0;
    for( int i=1; i< num1; i++)    {
    if( num1%i == 0)    {
    sum1 = sum1 +i;
    }
    }
    for( int j=1; j< num2; j++)    {
    if( num2%j == 0)    {
    sum2 = sum2 +j;
    }
    }
    if(sum1 == num2 && sum2 == num1)    {
    printf("The numbers are amicable number");
    }else    {
    printf("The numbers are not amicable number");
    }
return 0; 
}

