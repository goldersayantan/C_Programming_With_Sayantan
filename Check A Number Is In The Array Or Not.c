// Check A Number Is In The Array Or Not...
# include <stdio.h>
int main()    {
    int num1;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&num1);
    int arr[num1];
    int i;
    for( i=0; i<num1; i++)    {
        printf("Enter the element in index no. %d: ",i);
        scanf("%d",&arr[i]);
    }
    int num2;
    printf("Enter a number to found: ");
    scanf("%d",&num2);
    int temp=0;
    int j;
    for( j=0; j<num1; j++)    {
        if( num2 == arr[j] )    {
        temp=1;
        break;
        }else    {
        temp=0;
        }
    }
    if( temp ==1)    {
    printf("The number found in index number: %d",j);
    }else    {
    printf("Number not found");
    }
return 0;
}