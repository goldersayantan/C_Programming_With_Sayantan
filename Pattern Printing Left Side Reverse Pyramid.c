// *****
// ****
// ***
// **
// *
// Print This Pattern For N Number Of Lines...
# include <stdio.h>
int main()    {
    int line;
    printf("Enter the line number:");
    scanf("%d",&line);
    for( int i =line; i >=1; i--)    {
        for( int j =i; j>=1; j--)    {
        printf("* ");
        }
        printf("\n");
    }
return 0;
}