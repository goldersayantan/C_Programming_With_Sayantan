// Given An Array Of Integers, Change The Value Of All Odd Indexed Elements To Its Second Multiple And Increment All Even Indexed Value By 10....
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
    printf("The Changed Elements in the array are: ");
    for( i=0; i<num; i++)    {
    if( i%2 != 0)    {
    printf("%d ",arr[i]*2);
    }else    {
    printf("%d ",arr[i]+10);
    }
    }
return 0;
}