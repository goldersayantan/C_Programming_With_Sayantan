// Display From 1 To N And Calculate The Sum...
# include <stdio.h>
    int add( int x, int y)    {
    if( x>y )    {
    return 0;
    }else    {
    int temp=add(x+1,y);
    printf("%d ",x);
    int sum = x+temp;
    return sum;
    }
    }
int main()    {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The numbers are:");
    int val = add( 0, num);
    printf("\nThe sum is: %d",val);
return 0;
}