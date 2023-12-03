// Multiplication Of Two Matrices...
# include <stdio.h>
int main()    {
    int row1, col1;
    printf("Enter the number of rows: ");
    scanf("%d",&row1);
    printf("Enter the number of columns: ");
    scanf("%d",&col1);
    int arr1[row1][col1];
    for( int i=0; i<row1; i++)    {
        for( int j=0; j<col1; j++)    {
        printf("Enter the element in %d%d index: ",(i+1),(j+1));
        scanf("%d",&arr1[i][j]);
        }
    }
    for( int k=0; k<row1; k++)    {
        for( int l=0; l<col1; l++)    {
        printf("%d ",arr1[k][l]);
        }
        printf("\n");
    }
    
    int row2, col2;
    printf("Enter the number of rows: ");
    scanf("%d",&row2);
    printf("Enter the number of columns: ");
    scanf("%d",&col2);
    int arr2[row2][col2];
    for( int i=0; i<row2; i++)    {
        for( int j=0; j<col2; j++)    {
        printf("Enter the element in %d%d index: ",(i+1),(j+1));
        scanf("%d",&arr2[i][j]);
        }
    }
    for( int k=0; k<row2; k++)    {
        for( int l=0; l<col2; l++)    {
        printf("%d ",arr2[k][l]);
        }
        printf("\n");
    }
    
    if(col1 == row2)     {
    printf("The Multiplication of these two matrices is: \n");
    int cr= col1;
    int rs[row1][col2];
    for( int i=0; i<row1; i++)    {
        for( int j=0; j<col2; j++)    {
        rs[i][j]=0;
        for( int k=0; k<cr; k++)    {
        rs[i][j]=rs[i][j]+( arr1[i][k]*arr2[k][j] );
        }
    }
    }
    
    for( int i=0; i<row1; i++)    {
        for( int j=0; j<col2; j++)    {
        printf("%d ",rs[i][j]);
        }
        printf("\n");
    }
    }else    {
    printf("Multiplication not possible...");
    }
return 0;    
}