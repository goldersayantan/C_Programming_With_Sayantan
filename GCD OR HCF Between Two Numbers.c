// GCD OR HCF Between Two Numbers...
# include <stdio.h>
int main()    {
    int num1, num2, result;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    if( num1 < num2)    {
        for( int i=1; i<=num1; i++)    {
            if( num1%i==0 && num2%i==0 )    {
                result =i;
            }
        }
    }else if( num2 < num1)    {
    for( int j=1; j<=num2; j++)    {
            if( num2%j==0 && num1%j==0 )    {
                result =j;
            }
        }
    }else  if( num1 == num2 )    {
    result=num1;
    }
    printf("The GCD or HCF between %d and %d is: %d",num1, num2, result);
return 0;
}