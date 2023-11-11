// Print All The Odd Numbers In A Specific Range...
# include <stdio.h>
int main()    {
    int num1, num2;
    printf("Enter the starting number:");
    scanf("%d",&num1);
    printf("Enter the ending number:");
    scanf("%d",&num2);
    for( int i=num1; i <= num2; i++ )    {
    if( i%2 == 0)    {
    continue;
    }
    printf("%d ",i);
    }
    return 0;
}