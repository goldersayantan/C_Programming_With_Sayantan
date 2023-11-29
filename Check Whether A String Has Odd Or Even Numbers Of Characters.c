// Check Whether A String Has Odd Or Even Numbers Of Characters...
# include <stdio.h>
int main()    {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int count =0;
    for( int i=0; str[i] != '\0'; i++)    {
    count++;
    }
    if( count %2 ==0)    {
    printf("The string has Even numbers of Characters");
    }else    {
    printf("The string has Odd numbers of Characters");
    }
return 0;
}