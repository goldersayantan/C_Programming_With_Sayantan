// Print The Sum Of Numbers...
#include<stdio.h>
int main()  {
    int num;
    printf("Enter the value of number:");
    scanf("%d",&num);
    int sum = 0;
    for( int i = 1; i <= num; i++)    {
    sum = sum + i;
    }
    printf("The sum is:%d",sum);
return 0;
}