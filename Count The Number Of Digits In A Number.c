// Count The Number Of Digits In A Number...
# include <stdio.h>
int main()    {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=0;
    while( num>0)    {
    num=num/10;
    temp++;
    }
    printf("The number of digits are: %d",temp);
return 0;
}