// Pattern Printing Left Side Pyramid With Increasing Number...
# include <stdio.h>
int main()    {
    int num,a=1;
    printf("Enter the number of lines:");
    scanf("%d",&num);
    for( int i=1; i<=num; i++)    {
    for( int j=1; j<=i; j++)    {
    printf("%d ",a);
    a++;
    }
    printf("\n");
    }
return 0;
}