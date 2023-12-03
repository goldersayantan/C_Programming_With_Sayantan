// Deleting Element From An Array...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&num);
    int arr[num];
    for( int i=0; i<num; i++)    {
    printf("Enter the element number %d: ",(i+1));
    scanf("%d",&arr[i]);
    }
    printf("The array is: ");
    for( int j=0; j<num; j++)    {
    printf("%d ",arr[j]);
    }
    int del;
    printf("\nEnter the index of element you want to delete from an array: ");
    scanf("%d",&del);
    if( del >= 0 && del< num)    {
    // In array 0 is 1st position.....
    for( int k=del-1; k<num-1; k++)    {
    arr[k] = arr[k+1];
    }
    num--;
    printf("The new array is: ");
    for( int l=0; l<num; l++)    {
    printf("%d ",arr[l]);
    }
    }else    {
    printf("Invalid index..");
    }
return 0;    
}