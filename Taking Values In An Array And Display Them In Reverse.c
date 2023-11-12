// Taking Values In An Array And Display Them In Reverse...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter how many numbers will be in an array:");
    scanf("%d",&num);
    int arr[num];
    for( int i=0; i<num; i++)    {
    int a= i+1;
    printf("Enter the element number %d: ", a);
    scanf("%d",&arr[i]);
    }
    printf("The elements in reverse: ");
    for( int j=(num-1); j>=0; j--)    {
    printf("%d ",arr[j]);
    }
return 0;
}