// Make A Array Of Characters, And Give The Lower Case Characters Into It, And Print Them In Uppercase...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&num);
    char arr[num];
    int i;
    for( i=0; i<num; i++)    {
    printf("Enter the element number %d: ",(i+1));
    scanf(" %c",&arr[i]);
    }
    int j;
    for( j=0; j<num; j++)    {
    if( arr[j] >= 'a'  &&  arr[j] <= 'z' )    {
    arr[j] = arr[j] - ('a' - 'A');
    }else    {
    arr[j]=arr[j];
    }
    }
    int k;
    for( k=0; k<num; k++)    {
    printf("The Characters in Uppercase: %c ",arr[k]);
    }
return 0;
}