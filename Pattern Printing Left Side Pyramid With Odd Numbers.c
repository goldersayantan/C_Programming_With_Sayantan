//1
//13
//135
//1357
//Print This Pattern For N Number Of Lines...
# include <stdio.h>
int main()    {
    int line;
    printf("Enter the line number:");
    scanf("%d",&line);
    for( int i =1; i <= line; i++)    {
        for( int j =1; j <= (2*i)-1; j+=2)    {
        if( j%2 == 0)
        continue;
        printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}