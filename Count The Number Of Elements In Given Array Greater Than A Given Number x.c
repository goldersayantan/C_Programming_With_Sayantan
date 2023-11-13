// Count The Number Of Elements In Given Array Greater Than A Given Number x...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter the number of numbers in an array: ");
    scanf("%d",&num);
    int arr[num];
    int i;
    for( i=0; i<num; i++)    {
    printf("Enter the element number %d: ",i+1);
    scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    int count =0;
    printf("The number of numbers which are greater than %d is:",x);
    for( int i=0; i<num; i++)    {
    if( arr[i]>x)    {
    count++;
    }
    }
    printf("%d",count);
return 0;
}