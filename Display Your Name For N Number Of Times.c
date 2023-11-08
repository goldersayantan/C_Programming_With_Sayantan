// Print Your Name For N Number Of Times.c
# include <stdio.h>
int main()    {
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    for( int i=1; i<=num1; i++ )    {
    printf("My Name Is Sayantan Golder\n");
    }


    int num2,i=1;
    printf("Enter the number:");
    scanf("%d", &num2);
    do    {
    printf("My Name Is Sayantan Golder\n"); 
    i++;
    }while( i <= num2 );
    
    
    int num3, j=1;
    printf("Enter the number:");
    scanf("%d", &num3);
    while(j <= num3)    {
    printf("My Name Is Sayantan Golder\n");
    j++;
    }
    return 0;
    }
