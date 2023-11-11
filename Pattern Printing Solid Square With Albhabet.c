//ABCD
//ABCD
//ABCD
//ABCD
//Print This Pattern For N Number Of Lines...
# include <stdio.h>
int main()    {
    int line;
    printf("Enter the line number:");
    scanf("%d",&line);
    for( int i =1; i <= line; i++)    {
        for( int j =1; j <= line; j++)    {
        printf("%c ",j+64);
        }
        printf("\n");
    }
return 0;
}