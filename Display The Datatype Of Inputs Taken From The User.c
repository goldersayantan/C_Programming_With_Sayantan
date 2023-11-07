//  Display Datatype Of Inputs Taken From The User...
#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    int p,q,r,s;
    printf("Enter a character:");
    scanf("%c",&ch);
    p=isdigit(ch);
    q=isalpha(ch);
    r=ispunct(ch);
    s=isspace(ch);
    if(p==1)    {
    printf("The character %c entered is a digit",a);
    }else if(q==1)    {
    printf("The character %c entered is a alphabet ",a);
    }else if(r==1)    {
    printf("The character %c entered is a punctuation character ",a);
    }else if(s==1)    {
    printf("The character %c entered is space ",a);
    }else    {
    printf("WRONG CHOICE!");
    }
return 0;
}