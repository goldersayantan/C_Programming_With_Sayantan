// Addition Of Two Matrices...
# include <stdio.h>
int main()    {
    int row, col;
    printf("Enter the number of row: ");
    scanf("%d",&row);
    printf("Enter the number of column: ");
    scanf("%d",&col);
    printf("For First Matrix:-\n");
    int arr1[row][col];
    int i,j;
    for( i=0; i<row; i++)    {
        for( j=0; j<col; j++)    {
        printf("Enter the number in %d %d index: ",i+1,j+1);
        scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    
    printf("For Second Matrix:-\n");
    int arr2[row][col];
    int k,l;
    for( k=0; k<row; k++)    {
        for( l=0; l<col; l++)    {
        printf("Enter the number in %d %d index: ",k+1,l+1);
        scanf("%d",&arr2[k][l]);
        }
    }
    printf("\n");
    
    printf("After Addition Of Two Matrices:");
    printf("The Sum Is:\n");
    for( int m=0; m<row; m++)    {
        for( int n=0; n<col;n++)    {
        printf("%d ",(arr1[m][n] + arr2[m][n]));
    }
    printf("\n");
    }
    return 0;
}
.......................................................
// Addition Of Two Matrices...
# include <stdio.h>
int main()    {
    int row1, col1;
    printf("For First Matrix:-\n");
    printf("Enter the number of row: ");
    scanf("%d",&row1);
    printf("Enter the number of column: ");
    scanf("%d",&col1);
    int arr1[row1][col1];
    int i,j;
    for( i=0; i<row1; i++)    {
        for( j=0; j<col1; j++)    {
        printf("Enter the number in %d %d index: ",i+1,j+1);
        scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    
    int row2, col2;
    printf("For Second Matrix:-\n");
    printf("Enter the number of row: ");
    scanf("%d",&row2);
    printf("Enter the number of column: ");
    scanf("%d",&col2);
    int arr2[row2][col2];
    int k,l;
    for( k=0; k<row2; k++)    {
        for( l=0; l<col2; l++)    {
        printf("Enter the number in %d %d index: ",k+1,l+1);
        scanf("%d",&arr2[k][l]);
        }
    }
    printf("\n");
    
    printf("After Addition Of Two Matrices:");
    printf("The Sum Is:\n");
    if( row1 == row2 && col1 == col2)    {
    for( int m=0; m<row1; m++)    {
        for( int n=0; n<col1;n++)    {
        printf("%d",(arr1[m][n] + arr2[m][n]));
    }
    printf("\n");
    }
    }else    {
    printf("Invalid Matrices");
    }
    return 0;
}