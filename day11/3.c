#include <stdio.h>
int main()
{
    int a,b=1;
    printf("Enter value of a: ");
    scanf("%d",&a);
    while (b<=a)
    {
        printf("%d\n", b);
        b++;
    }
}