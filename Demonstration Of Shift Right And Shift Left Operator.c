// Demonstration The Shift Right And Shift Left Operator...
#include<stdio.h>
int main()    {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("After shiftright:");
    printf("%d\n",num>>1);
    printf("After shiftleft:");
    printf("%d\n",num<<1);
return 0;
}