// Calculate The Sum ((1/n^2)+(2/n^2)+...+(n/n^2))...
# include <stdio.h>
int main()    {
    int num;
    float sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for( int i=1; i <= num; i++ )    {
    sum = sum + ((float)i/(num*num));
    }
    printf("The sum is: %f",sum);
return 0;
}