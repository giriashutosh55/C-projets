#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    int percent;
    char name[20];

} N1, N2, N3, N4;

struct student N1, N2, N3, N4;

int main()
{

    strcpy(N1.name, "Ashutosh");
    strcpy(N2.name, "Rahul");

    N1.id = 1;
    N1.marks = 495;
    N1.percent = 90;

    N2.id = 2;
    N2.marks = 355;
    N2.percent = 68;

    printf(" %d %c got %d in percent %d\n", N1.id, N1.name, N1.marks, N1.percent);
    printf(" %d %c got %d in percent %d\n", N2.id, N2.name, N2.marks, N2.percent);

    return 0;
}