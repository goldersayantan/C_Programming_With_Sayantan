// Check A Person Is Eligible To Vote Or Not...
#include<stdio.h>
int main()    {
    int year1, year2;
    printf("Enter birth year:\n");
    scanf("%d",&year1);
    printf("Enter the current year:");
    scanf("%d",&year2);
    if((year2-year1)>=18)  {
    printf("The person is eligible to vote");
    }else    {
    printf("The person is not eligible to vote");
    }
return 0;
}