// Create A Structure Type 'Book' With Name, Price And Number Of Pages As Its Attributes...
# include<stdio.h>
int main()    {
    struct book    {
        char name[50];
        float price;
        int no_of_pages;
    }b1, b2, b3;
    
    printf("Enter the name of the first book: ");
    scanf(" %[^\n]s",b1.name);
    printf("Enter the price of the first book: ");
    scanf("%f",&b1.price);
    printf("Enter the number of pages of the first book: ");
    scanf("%d",&b1.no_of_pages);
    
    printf("The name of the first book is: %s\n", b1.name);
    printf("The price of the first book is: %f\n", b1.price);
    printf("The no_of_pages of the first book is: %d\n", b1.no_of_pages);
    
    printf("Enter the name of the second book: ");
    scanf(" %[^\n]s",b2.name);
    printf("Enter the price of the second book: ");
    scanf("%f",&b2.price);
    printf("Enter the number of pages of the second book: ");
    scanf("%d",&b2.no_of_pages);
    
    printf("The name of the second book is: %s\n", b2.name);
    printf("The price of the second book is: %f\n", b2.price);
    printf("The no_of_pages of the second book is: %d\n", b2.no_of_pages);

    printf("Enter the name of the third book: ");
    scanf(" %[^\n]s",b3.name);
    printf("Enter the price of the third book: ");
    scanf("%f",&b3.price);
    printf("Enter the number of pages of the third book: ");
    scanf("%d",&b3.no_of_pages);
    
    printf("The name of the third book is: %s\n", b3.name);
    printf("The price of the third book is: %f\n", b3.price);
    printf("The no_of_pages of the third book is: %d\n", b3.no_of_pages);

return 0;
}