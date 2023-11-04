// Check A Number Is Odd Or Even...
#include<stdio.h>
int main()    {
    int num1, num2;
    printf("Enter the value of A:");
    scanf("%d",&num1);
    num2 = num1%2;
    if(num2 == 0)	{
    printf("%d is even",num1);
    }else	{ 
    printf("%d is odd",num1);
    }
return 0;
}