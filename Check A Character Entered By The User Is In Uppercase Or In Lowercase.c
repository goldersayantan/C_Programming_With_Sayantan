// Check A Character Entered By The User Is In Upper Case Character Or In Lower Case...
#include<stdio.h>
int main()    {
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')  {
    printf("The character entered is in uppercase");
    }else if(ch>= 'a' && ch<= 'z')   {
    printf("The character entered is in lowercase");
    }else   {
    printf("invalid chracter Try again");
    }
return 0;
}