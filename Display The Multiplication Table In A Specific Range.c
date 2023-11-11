// Display The Multiplication Table In A Specific Range...
# include <stdio.h>
int main()    {
    int num1, num2;
    printf("Enter the starting number:");
    scanf("%d",&num1);
    printf("Enter the ending number:");
    scanf("%d",&num2);
    for( int i=num1; i<=num2; i++)    {
        for( int j=1; j<=10; j++)    {
        printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("-----------------\n");
    }
return 0;
}