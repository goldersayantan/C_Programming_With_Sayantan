// Make A Structure Of Two Persons And Print Their Name, Total Covered Distance And Total Time...
# include <stdio.h>
int main()    {
    struct person{
        char name[50];
        float dis;
        int time;
    } x, y;
    
    printf("Enter the name of the first name: ");
    gets(x.name);
    printf("Enter the covered distance: ");
    scanf("%f",&x.dis);
    printf("Enter the time in minutes: ");
    scanf("%d",&x.time);
    
    getchar();
    
    printf("Enter the name of the second name: ");
    gets(y.name);
    printf("Enter the covered distance: ");
    scanf("%f",&y.dis);
    printf("Enter the time in minutes: ");
    scanf("%d",&y.time);
    
    printf("The name of the first person is: %s\n",x.name);
    printf("The name of the second person is: %s\n",y.name);
    printf("The total distance covered by them is: %f\n",(x.dis+y.dis));
    printf("The total time taken by them is: %d minutes\n",(x.time+y.time));
return 0;
}