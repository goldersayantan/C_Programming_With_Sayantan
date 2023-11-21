// Check A Number Is Palindrome Or Not...
# include <stdio.h>
int main()    {
    int num, fir, rem, sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    fir = num;
    while(num>0)    {
        rem= num%10;
        sum= rem+(sum*10);
        num=num/10;
    }
    if( sum == fir)    {
    printf("%d is palindrome number", fir);
    }else    {
    printf("%d is not palindrome number", fir);
    }
return 0;
}