// Reverse A String...
# include <stdio.h>
#include <string.h>
int main() {
    int num;
    printf("Enter the size of the string: ");
    scanf("%d",&num);
    getchar();
    char str[num];
    printf("Enter the string: ");
    gets(str);
    printf("The original string is: %s\n", str);
    printf("Reverse string is: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
return 0;
}