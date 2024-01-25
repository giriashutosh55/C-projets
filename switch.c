#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
      printf("Enter your age\n");
      scanf("%d",&age);
    switch (age)
    {
    case 5:
        printf("your are kid\n ");
        break;
    case 10:
        printf("your are Teeneger\n ");
        break;
    case 18:
        printf("your are Adult\n ");
        break;
    default:
        printf("your are not in list ");
    }
    return 0;
}