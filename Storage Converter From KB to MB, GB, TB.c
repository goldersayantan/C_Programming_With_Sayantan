// Storage Converter...
# include <stdio.h>
int main()    {
    float KB;
    printf("Enter the storage value in KB:");
    scanf("%f",&KB);
    printf("The storage value in MB: %f\n",(KB/(1024)));
    printf("The storage value in GB: %f\n",(KB/(1024*1024)));
    printf("The storage value in TB: %f\n",(KB/(1024*1024*1024)));
return 0;    
}