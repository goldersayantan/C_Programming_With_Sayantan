// Check A Character Is Vowel Or Not...
#include<stdio.h>
int main()    {
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    switch(ch)    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("The character is vowel");
    break;
    default:
    printf("The character is not vowel");
    }
return 0;
}