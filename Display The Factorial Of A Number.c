// Display The Factorial Of A Number...
# include <stdio.h>
int main()    {
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    int fact1=1;
    for( int i=num1; i>=1; i-- )    {
    fact1 = fact1*i;
    }
    printf("The factorial of %d is: %d", num1, fact1);
    printf("\n");
    
    
    int num2;
    printf("Enter the number:");
    scanf("%d",&num2);
    int j=num2;
    int fact2=1;
    while( j>=1)    {
    fact2 = fact2*j;
    j--;
    }
    printf("The factorial of %d is: %d", num2, fact2);
    printf("\n");    
    
    
    int num3;
    printf("Enter the number:");
    scanf("%d",&num3);
    int k= num3;
    int fact3 =1;
    do    {
    fact3 = fact3*k;
    k--;
    }while( k>=1);
    printf("The factorial of %d is: %d", num3, fact3);
    
return 0;
}