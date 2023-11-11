// Print Increasing(0 To N) - Decreasing(N To 0)...
# include <stdio.h>
    void inc( int x, int y)    {
    if( x>y )    {
    return;
    }else    {
    printf("%d ",x);
    inc( x+1, y);
    }
    }
    
    void dec( int a)    {
    if( a<0 )    {
    return;
    }else    {
    printf("%d ",a);
    dec(a-1);
    }
    }
    
int main()    {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The result is:");
    inc(0,num);
    dec(num);
    return 0;
}