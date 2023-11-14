// Sum Of All The Element In A 2D Array...
# include <stdio.h>
int main()    {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    int arr[row][col];
    int sum=0;
    for( int i=0; i<row; i++)    {
        for( int j=0; j<col; j++)    {
        printf("Enter the element in %d %d index",i+1,j+1);
        scanf("%d",&arr[i][j]);
        sum = sum + arr[i][j];
        }
        printf("The sum of all the element is: %d",sum);
    }
return 0;
}