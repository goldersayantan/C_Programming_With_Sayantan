// Convert Binary Numbers Into Decimal Number...
# include <stdio.h>
int main()    {
    int binary;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    int temp=binary;
    int decimal=0, weight=1;
    while( binary != 0)    {
        int rem = binary%10;
        decimal=decimal+(rem*weight);
        binary=binary/10;
        weight=weight*2;
    }
    printf("The decimal number equivalent to %d is: %d",temp,decimal);
return 0;
}