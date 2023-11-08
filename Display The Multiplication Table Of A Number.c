// Display The Multiplication Table...
# include <stdio.h>
int main()    {
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    for( int i=1; i <= 10; i++ )    {
    printf("%d * %d = %d\n", num1, i, num1*i);
    }
    
    
    int num2;
    printf("Enter the number:");
    scanf("%d",&num2);
    int j=1;
    while(j <= 10)    {
    printf("%d * %d = %d\n", num2, j, num2*j);
    j++;
    }
    
    
    int num3;
    printf("Enter the number:");
    scanf("%d",&num3);
    int k=1;
    do    {
    printf("%d * %d = %d\n", num3, k, num3*k);
    k++;
    }while(k <= 10);
return 0;
}