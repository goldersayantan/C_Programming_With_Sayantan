// Display The Sum Of N Numbers...
# include <stdio.h>
int main()    {
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    int sum1 =0;
    for( int i=1; i <= num1; i++)    {
    sum1 = sum1+i;
    }
    printf("The sum is: %d",sum1);
    printf("\n");
    
    int num2,j=1;
    printf("Enter the number:");
    scanf("%d",&num2);
    int sum2= 0;
    while( j<= num2)    {
    sum2 = sum2+j;
    j++;
    }
    printf("The sum is: %d",sum2);
    printf("\n");
    
    int num3, k=1;
    printf("Enter the number:");
    scanf("%d",&num3);
    int sum3=0;
    do    {
    sum3 = sum3+k;
    k++;
    }while( k<= num3);
    printf("The sum is: %d",sum3);
return 0;
}