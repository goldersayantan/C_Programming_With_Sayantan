// Display The Sum Of Positive Numbers Entered By The  User Until The User Entered A Negative Number...
# include <stdio.h>
int main()    {
    int num;
    int sum = 0;
    for( int i=1; ; i++ )    {
    printf("Enter a positive number:");
    scanf("%d",&num);
    if( num <= 0 )    {
    printf("You entered a negative number\n");
    break;
    }
    sum = sum + num;
    }
    printf("The sum of previous entered positive numbers: %d",sum);
return 0;
}