// Check A Character Entered By The User Is A Vowel Or Consonant...
#include<stdio.h>
int main()    {
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))    {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
      || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character entered is a vowel");
        }else      {
        printf("The character entered is a consonant");
        }
    }else    {
        printf("Invalid character Try Again");
    }
return 0;
}