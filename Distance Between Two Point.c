// Distance Between Two Points...
# include <stdio.h>
# include <math.h>
int main()    {
    int x1, y1, x2, y2;
    printf("Enter the value of first point: ");
    scanf("%d,%d",&x1,&y1);
    printf("Enter the value of second point: ");
    scanf("%d,%d",&x2,&y2);
    float val;
    val= sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    printf("The distance between (%d,%d) and (%d,%d) is: %f", x1, y1, x2, y2, val);
return 0;
}
    