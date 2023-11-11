// Display 0 To N Using Recursion...
# include <stdio.h>
    int inc( int x, int y )    {
    if( x>y )    {
    return x;
    }else    {
    printf("%d ",x);
    inc(x+1,y);
    }
    }
int main()    {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The numbers are: ");
    inc(0,num);
return 0;
}