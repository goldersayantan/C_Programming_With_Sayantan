// Pattern Printing Centre Based Pyramid With Numbers Increasing And Decreasingj... 
# include <stdio.h>
int main()    {
    int line,i,j,k,l;
    printf("Enter the number of lines: ");
    scanf("%d",&line);
    for( i=1; i<=line; i++)    {
        for( j=(line-i); j>=1; j--)    {
        printf(" ");
        }
        for( k=1; k<=i; k++)    {
        printf("%d",k);
        }
        for( l=(k-2); l>0; l--)    {
        printf("%d",l);
        }
        printf("\n");
    }
return 0;
}