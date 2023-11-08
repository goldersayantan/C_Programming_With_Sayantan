// Check A Triangle Is Right Angle Or Not...
# include <stdio.h>
int main()    {
    float base, height, side;
    printf("Enter the base:");
    scanf("%f", &base);
    printf("Enter the height:");
    scanf("%f", &height);
    printf("Enter the side:");
    scanf("%f", &side);
    if( side == sqrt(pow(base,2) + pow(height,2)))    {
    printf("The Triangle is Right Angled");
    }else    {
    printf("The Ttiangle is Not Right Angled");
    }
return 0;
}