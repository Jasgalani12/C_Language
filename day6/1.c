#include<stdio.h>
int main(){
    int c;
    printf("The temperature in Celsius: ");
    scanf("%d",&c);
    printf("The temperature in Fahrenheit:%d ",(c*59)+32);
    return 0;
}