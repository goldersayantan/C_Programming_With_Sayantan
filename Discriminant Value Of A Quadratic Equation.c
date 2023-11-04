//Write a program to get the discriminant value of a quadratic equation.
#include<stdio.h>
int main()    {
    float a,b,c,D;
    printf("Enter the values of A:");
    scanf("%f",&a);
    printf("Enter the values of B:");
    scanf("%f",&b);
    printf("Enter the values of C:");
    scanf("%f",&c);
    D=(b*b)-(4*a*c);
    printf("The value of Discriminant is:%f\n",((float)D));
return 0;
}