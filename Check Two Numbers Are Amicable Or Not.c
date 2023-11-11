// Check Two Numbers Are Amicable Or Not...
# include <stdio.h>
int main()    {
    int num1, num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    int sum =0;
    for( int i=1; i< num1; i++)    {
    if( num1%i == 0)    {
    sum = sum +i;
    }
    }
    if(sum == num2)    {
    printf("The numbers are amicable number");
    }else    {
    printf("The numbers are not amicable number");
    }
return 0; 
}

