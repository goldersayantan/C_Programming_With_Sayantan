// Check A Number Is Pime Or Composite...
#include<stdio.h>
int main()  {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int c = 1;
    for(int i = 2; i < num; i++ ) {
    if(num%i == 0)    {
    c=0;
    break;
    }
    }
    if( c == 0)  {
        printf("The number is composite number");
    }else if( c == 1)    {
        printf("The number is prime number");
    }else   {
        printf("Invalid");
    }
return 0;
}