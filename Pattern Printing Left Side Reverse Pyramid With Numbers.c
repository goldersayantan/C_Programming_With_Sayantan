//1234
//123
//12
//1
//Print This Pattern For N Number Of Lines...
# include <stdio.h>
int main()    {
    int line;
    printf("Enter the line number:");
    scanf("%d",&line);
    for( int i =line; i >= 1; i--)    {
        for( int j =1; j<=i; j++)    {
        printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}