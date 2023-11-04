// Convert The Value Of Temperature From Degree Fahrenheit To Degree Celcius.
#include<stdio.h>
int main()  {
    float f,c;
    printf("Enter the temperature in fahrenheit :");
    scanf("%f",&f);
    c = ((( f - 32 ) / 9)*5);
    printf("The temparature in celcius is: %f",((float)c));
return 0;
}