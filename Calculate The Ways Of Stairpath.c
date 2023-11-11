// Calculate The Ways Of Stairpath...
# include <stdio.h>
    int stairpath( int x)    
    if( x <= 2)    {
    return x;
    }else if( x==3)    {
    return 4;
    }else    {
    int ways= stairpath(x-1) + stairpath(x-2) + stairpath(x-3);
    return ways;
    }
    }
int main()    {
    int num;
    printf("Enter the stair number:");
    scanf("%d", &num);
    printf("The number of path is:%d",stairpath(num));
return 0;    
}