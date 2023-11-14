// Making Of 2D Array...
# include <stdio.h>
int main()    {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    int arr[row][col];
    for( int i=0; i<row; i++)    {
        for( int j=0; j<col; j++)    {
        printf("Enter the element of row number %d and column number %d : ",i+1,j+1);
        scanf("%d",&arr[i][j]);
        }
    }
    printf("The displaying array is:\n");
    
    for( int i=0; i<row; i++)    {
        for( int j=0; j<col; j++)    {
        printf("%d ",arr[i][j]);
        }
        printf("\n");
        }
return 0;
}