// Area Of A Triangle...
#include<stdio.h>
int main()  {
    float base, height;
    printf("Enter the base of a triangle:");
    scanf("%f",&base);
    printf("Enter the height of a triangle:");
    scanf("%f",&height);
    printf("The area of a triangle is: %f",((float) 0.5 * base * height));
return 0;
}