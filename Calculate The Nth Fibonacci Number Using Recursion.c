// Calculate The Nth Fibonacci Number Using Recursion...
# include <stdio.h>
    int fibo( int x)    {
    if( x == 1 || x == 2 )    {
    return 1;
    }else    {
    return fibo(x-1) + fibo(x-2);
    }
    }
int main()    {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The %dth fibonacci number is: %d",num,fibo(num));
return 0;
}