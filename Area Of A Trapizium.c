// Area Of A Trapizium...
#include<stdio.h>
int main()  {
    float upper, lower, height;
    printf("Enter the upper side of trapizium:");
    scanf("%f",&upper);
    printf("Enter the lower side of trapizium:");
    scanf("%f",&lower);
    printf("Enter the height of trapizium:");
    scanf("%f",&height);
    printf("The area of a rectangle is: %f",((float) 0.5 * ( upper + lower ) * height));
return 0;
}