// Check A Line Is Straight Or Not ...
# include <stdio.h>
int main()    {
    float y, m, x, c;
    printf("Enter the value of Y:");
    scanf("%f",&y);
    printf("Enter the value of M:");
    scanf("%f",&m);
    printf("Enter the value of X:");
    scanf("%f",&x);
    printf("Enter the value of C:");
    scanf("%f",&c);
    ( y == ((m*x)+c)) ? printf("The line is STRAIGHT") :  printf("The line is NOT STRAIGHT");
return 0;
}
