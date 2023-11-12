// Whose marks are less than 35, Print Gheir Roll Numbers...
# include <stdio.h>
int main()    {
    int num,i;
    printf("Enter the number of students:");
    scanf("%d",&num);
    int mar[num];
    for( i=0; i< num; i++)    {
    printf("Enter the marks of student number %d: ",i+1);
    scanf("%d",&mar[i]);
    }
    printf("Some students are fail\n");
    printf("Their roll numbers are: ");
    for( i=0; i< num; i++)    {
    if( mar[i] <= 35)    
    printf("%d",i);
    }
return 0;
}