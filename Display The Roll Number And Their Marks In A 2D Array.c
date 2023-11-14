// Display The Roll Number And Their Marks In A 2D Array...
# include <stdio.h>
int main()    {
    int roll, marks;
    printf("Enter the number of students in class: ");
    scanf("%d",&roll);
    printf("Enter the number of subjects in class: ");
    scanf("%d",&marks);
    printf("\n");
    int arr[roll][marks];
    for( int i=0; i< roll; i++)    {
    printf("Entef the marks of roll no. %d: ",i+1);
    printf("\n");
        for( int j=0; j<marks; j++)    {
        printf("Enter the marks of subject no. %d:",j+1);
        scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("Displaying the array:");
    for( int i=0; i< roll; i++)    {
    printf("%d ",i+1);
        for( int j=0; j<marks; j++)    {
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
return 0;    
}