#include <stdio.h>

int main()
{
    int age;
    do
    {

        printf("enter your age\n");
        scanf("%d", &age);
        if (age < 10)
        {
            printf("Renter your age please\n");
            continue;
        }
        if (age >= 18)
        {
            printf("you are eligibal\n");
            break;
        }
        
        if (10<age<18)
        {
            printf("You are eligibal for only child\n");
            break;
        }
        

    } while (age < 10);
    // if (age<10)
    {
        // printf("Renter your age\n");
    }

    return 0;
}