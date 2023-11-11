// Display N To 0 Using Recursion...
# include <stdio.h>
    void rev( int x )    {
    if( x == 0 )    {
    return;
    }else    {
    printf("%d ",x);
    rev( x-1 );
    }
    }
int main()    {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The Number in reverse are:");
    rev(num);
    return 0;
}