// Display N To 0 Using Recursion...
# include <stdio.h>
    void dec( int x )    {
    if( x == 0 )    {
    return;
    }else    {
    printf("%d ",x);
    dec( x-1 );
    }
    }
int main()    {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The Number in reverse are:");
    dec(num);
    return 0;
}