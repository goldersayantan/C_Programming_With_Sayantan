// Find The Maximum Value Out Of All Elements In The Array...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter the number of numbers in an array: ");
    scanf("%d",&num);
    int arr[num];
    int i,max;
    for( i=0; i<num; i++)    {
    printf("Enter the element number %d :",i+1);
    scanf("%d",&arr[i]);
    }
    max = arr[0];
    for( i=0; i<num; i++)    {
    if( max< arr[i])    {
    max = arr[i];
    }
    }
    printf("The Maximum Number is: %d",max);
return 0;
}