#include <stdio.h>
void printstar (int n)
{
    switch(n=0)
    {
    case 0:
         
            
            printf("%c\n");
            break;

    case 1:
        
        break;
    
    }
    
}
int main()
{
    int n,a;
    char c = '*';
    printf("Enter the number you want to print star\n");
    scanf("%d",&n);
    printf("Enter 0 for Triangular star pattern\n");
    printf("Enter 1 for Reverse Triangular star pattern\n");
    scanf("%d",&a);

    printf("%c\n", printstar);
    
return 0;
    
}