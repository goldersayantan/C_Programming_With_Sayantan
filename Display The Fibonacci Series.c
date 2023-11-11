// Display The Fibonacci Series...
# include <stdio.h>
int main()    {
    int limit, temp1=0, temp2=1, backup;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("The series is: ");
    for( int i=1; i<=limit; i++)    {
    printf("%d ",temp1);
    backup = temp2;
    temp2 = temp1 + temp2;
    temp1 = backup;
    }
return 0;
}