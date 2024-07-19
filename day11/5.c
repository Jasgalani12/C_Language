#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    while (a<=b)
    {
        if (a % 4 == 0)
        {
            printf("%d\n", a);
        }
        a++;
    }
}