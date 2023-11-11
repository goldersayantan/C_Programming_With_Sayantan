//1
//13
//135
//1357
//Print This Pattern For N Number Of Lines...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter the number up to where to print:");
    scanf("%d",&num);
    for( int i =1; i <= num; i+=2)    {
        for( int j =1; j<=i; j+=2)    {
        if( j%2 == 0)
        continue;
        printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}