#include<stdio.h>
int main()
{
    int hour,min;
    printf("Enter hour and minute\n");
    scanf("%d:%d",&hour,&min);
    printf("%d hour and %d minute",hour,min);
    return 0;
}