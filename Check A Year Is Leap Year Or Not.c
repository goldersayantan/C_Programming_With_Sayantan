// Check A Year Is Leap Year Or Not...
#include<stdio.h>
int main()    {
    int year;
    printf("Enter Year:");
    scanf("%d",&year);
    if((year%4==0)&&((year%400==0)||(year%100!=0))){
    printf("The year is a leap year");    
    }
    else{
    printf("The year is not a leap year");
    }
return 0;
}
    