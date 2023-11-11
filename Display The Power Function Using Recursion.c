// Display The Power Function Using Recursion...
# include <stdio.h>
    int pow( int x, int y)    {
    if( y== 0)    {
    return 1;
    }else    {
    return x*pow( x, y-1);
    }
    }
int main()    {
    int num, power;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&power);
    int val=pow( num, power);
    printf("The value is: %d",val);
return 0;
}