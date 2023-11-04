// Area Of A Triangle Ising Heron's Formula...
# include <stdio.h>
int main()    {
    float side1, side2, side3;
    printf("Enter the first side:");
    scanf("%f", &side1);
    printf("Enter the second side:");
    scanf("%f", &side2);
    printf("Enter the third side:");
    scanf("%f", &side3);
    float s = (( side1 + side2 + side3 )/2);
    float area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    printf("The area of a triangle is: %f",area);
return 0;    
}