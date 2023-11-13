// Calculate The Sum Of All The Elements In A Array...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter the number of numbers in an array: ");
    scanf("%d",&num);
    int sum=0;
    int arr[num];
    int i;
    for( i=0; i<num; i++)    {
    printf("Enter the element number %d :",i+1);
    scanf("%d",&arr[i]);
    sum = sum+arr[i];
    }
    printf("The sum of all the numbers in array is: %d",sum);
return 0;
}