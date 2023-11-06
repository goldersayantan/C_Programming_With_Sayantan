// Solve All The Algebraic Identities...
#include<stdio.h>
int main()    {
    float a,b,c;
    printf("Enter the values of A:");
    scanf("%f",&a);
    printf("Enter the values of B:");
    scanf("%f",&b);
    printf("Enter the values of C:");
    scanf("%f",&c);
    printf("The algebric identities are:\n");
    printf("(a+b)^2=%f\n",((a*a)+(2*a*b)+(b*b)));
    printf("(a-b)^2=%f\n",((a*a)-(2*a*b)+(b*b)));
    printf("(a^2-b^2)=%f\n",((a+b)*(a-b)));
    printf("(a+b+c)^2=%f\n",((a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a)));
    printf("(a+b-c)^2=%f\n",((a*a)+(b*b)+(c*c)+(2*a*b)-(2*b*c)-(2*c*a)));
    printf("(a-b+c)^2=%f\n",((a*a)+(b*b)+(c*c)-(2*a*b)-(2*b*c)+(2*c*a)));
    printf("(-a+b+c)^2=%f\n",((a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a)));
    printf("(a-b-c)^2=%f\n",((a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a)));
    printf("(a+b)^3=%f\n",((a*a*a)+(b*b*b)+((3*a*b)+(a+b))));
    printf("(a-b)^3=%f\n",((a*a*a)-(b*b*b)-((3*a*b)+(a-b))));
    printf("(a^3+b^3)=%f\n",((a+b)*((a*a)-(a*b)+(b*b))));
    printf("(a63-b^3)=%f\n",((a-b)*((a*a)+(a*b)+(b*b))));
    printf("(a^3 + b^3 + c^3 - 3abc)=%f\n",((a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c)));
return 0;
}