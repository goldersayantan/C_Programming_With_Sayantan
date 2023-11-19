//Create A Structure Type 'Person' With Name, Salary And Age As Its Attributes. Declare And Initialize 2 Variables For This. Print The Name Of First Person And Age Of The Other...
# include <stdio.h>
int main()    {
    struct person    {
        char name[50];
        int salary;
        int age;
    }p1, p2;
    
    printf("Enter the name of first person: ");
    scanf(" %[^\n]s",p1.name);
    printf("Enter the salary of the first person: ");
    scanf("%d",&p1.salary);
    printf("Enter the age of the first person: ");
    scanf("%d",&p1.age);
    
    printf("Enter the name of second person: ");
    scanf(" %[^\n]s",p2.name);
    printf("Enter the salary of the second person: ");
    scanf("%d",&p2.salary);
    printf("Enter the age of the second person: ");
    scanf("%d",&p2.age);
    
    printf("The name of the first person is: %s\n", p1.name);
    printf("The age of the second person is: %d\n", p2.age);
 
return 0;   
}