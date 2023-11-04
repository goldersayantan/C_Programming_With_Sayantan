// Convert The Value Of Temperature From Degree Celcius To Degree Fahrenheit.
#include<stdio.h>
int main()  {
    float c,f;
    printf("Enter the temperature in celcius :");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("The temparature in fahrenheit is: %f",((float)f));
return 0;
}