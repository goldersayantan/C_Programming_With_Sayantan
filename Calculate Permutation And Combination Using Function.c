// Calculate Permutation And Combination Using Function...
# include <stdio.h>
int fact( int x)    {
    int fact=1;
    for( int i=x; i>=1; i--)    {
    fact= fact*i;
    }
return fact;
}
int npr( int n, int r)    {
    int val1 = fact(n)/fact(n-r);
return val1;    
}
int ncr( int n, int r)    {
    int val2 = fact(n)/( fact(r)*fact(n-r));
return val2;    
}
int main()    {
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    printf("The value of Permutation Calculation is: %d\n",npr( n,r));
    printf("The value of Combination Calculation is: %d",ncr( n,r));
return 0;    
}  