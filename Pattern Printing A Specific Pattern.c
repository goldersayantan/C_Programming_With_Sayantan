//$***$
//*$ $*
//* $ *
//*$ $*
//$***$
//Print This Pattern For Specific Line...
# include <stdio.h>
int main()    {
    int line;
    printf("Enter the number of lines: ");
    scanf("%d",&line);
    for( int i=1; i<=line; i++)    {
        for( int j=1; j<=line; j++)    {
        if( i==j || (i+j)==(line+1) )    {
        printf("$ ");
        }else if( i==1 || i==line || j==1 || j==line )    {
        printf("* ");
        }else    {
        printf("  ");
        }
        }
        printf("\n");
    }
return 0;
}