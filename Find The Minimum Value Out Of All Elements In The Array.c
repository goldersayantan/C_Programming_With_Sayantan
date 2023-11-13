// Find The Minimum Value Out Of All Elements In The Array...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter the number of numbers in an array: ");
    scanf("%d",&num);
    int arr[num];
    int i,min;
    for( i=0; i<num; i++)    {
    printf("Enter the element number %d :",i+1);
    scanf("%d",&arr[i]);
    }
    min = arr[0];
    for( i=0; i<num; i++)    {
    if( min> arr[i])    {
    min = arr[i];
    }
    }
    printf("The Minimum Number is: %d",min);
return 0;
}