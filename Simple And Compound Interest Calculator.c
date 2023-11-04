//Calculate Simple and Compound Interest...
#include<stdio.h>
int main()    {
    float p,r,t,val;
    printf("Enter the value of Principle:");
    scanf("%f",&p);
    printf("Enter the value of rate of interest:");
    scanf("%f",&r);
    printf("Enter the value of time:");
    scanf("%f",&t);
    printf("The value of simple interest is:%f\n",((p*r*t)/100));
    printf("For compund interest\n");
    int n;
    printf("Enter Number of times interest applied per time period:");
    scanf("%d",&n);
    val = pow((1+(r/n)),(n*t));
    printf("The value of compound interet is:%f", (val * p));
return 0;
}