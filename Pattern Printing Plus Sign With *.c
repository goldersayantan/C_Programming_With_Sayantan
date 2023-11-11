//  *
//  *
//*****
//  *
//  *
// Print This Pattern For N Number Of Lines...
# include <stdio.h>
int main()    {
    int line;
    printf("Please Enter A Odd Line Number To Get A Perfect Pattern\n");
    printf("Enter the line number:");
    scanf("%d",&line);
    for( int i=1; i<=line; i++)    {
        for( int j=1; j<=line; j++)    {
        if( i == ( line/2 +1)  || j == ( line/2 +1))    {
        printf("*");
        }else    {
        printf(" ");
        }
        }
        printf("\n");
    }
return 0;
}