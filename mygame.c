#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter no A\n");
    scanf("%d", &a);
    printf("enter no B\n");
    scanf("%d", &b);
    printf("enter no C\n");
    scanf("%d", &c);
    if (a+b>b+c)
    {
        printf("Statement 1 is true\n");
        printf("wow nice job\n");
    } 
    if (a+c>b+a)
    {
        printf("Statement 2 is true\n");
        printf("wow nice job");
    }
    else
    {
        printf("Better luck next time");
    }
    return 0;
}    