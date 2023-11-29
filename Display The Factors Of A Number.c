// Display The Factors Of A Number...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The factors are: ");
    for( int i=1; i<=num; i++)    {
        if( num%i == 0)    {
        printf("%d ",i);
        }
    }
return 0;
}