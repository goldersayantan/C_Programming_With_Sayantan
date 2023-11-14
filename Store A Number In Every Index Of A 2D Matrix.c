// Store A Number In Every Index Of A 2D Matrix...
# include <stdio.h>
int main()    {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    printf("The array is: \n");
    for( int i=0; i< row; i++)    {
        for( int j=0; j< col; j++)    {
        printf("10 ");
        }
        printf("\n");
    }
return 0;    
}