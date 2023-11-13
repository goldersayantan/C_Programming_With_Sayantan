// Find The Maximum Value Out Of All Elements In The Array...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter the number of numbers in an array: ");
    scanf("%d",&num);
    int max=-1;
    int arr[num];
    for(int i=0; i<num; i++)    {
    printf("Enter the element number %d :",i+1);
    scanf("%d",&arr[i]);
    if( arr[i]>max)    {
    max =arr[i];
    }
    }
    printf("The Maximum Number is: %d",max);
return 0;
}