// ASCII Value Of A Character...
#include<stdio.h>
int main()  {
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    printf("The ASCII value of %c is: %d",ch, ((int) ch));
return 0;
}