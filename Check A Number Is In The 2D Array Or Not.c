// Check A Number Is In The 2 Array Or Not...
# include <stdio.h>
int main()    {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    printf("\n");
    int arr[row][col];
    for( int i=0; i<row; i++)    {
        for( int j=0; j<col; j++)    {
        printf("Enter the number in %d%d index: ",(i+1),(j+1));
        scanf("%d",&arr[i][j]);
        }
    printf("\n");
    }
    int found =0;
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for( int k=0; k<row; k++)    {
        for( int l=0; l<col; l++)    {
        if( num==arr[k][l] )    {
        printf("The element found in index: %d%d\n",k+1,l+1);
        break;
        }
        }
        }
return 0;    
}