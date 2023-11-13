// Calculate The Product Of All The Elements In A Array...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter the number of numbers in an array: ");
    scanf("%d",&num);
    int product=1;
    int arr[num];
    int i;
    for( i=0; i<num; i++)    {
    printf("Enter the element number %d :",i+1);
    scanf("%d",&arr[i]);
    product = product*arr[i];
    }
    printf("The Multiplication of all the numbers in array is: %d",product);
return 0;
}