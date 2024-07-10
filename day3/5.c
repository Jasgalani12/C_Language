#include<stdio.h>
int main(){
    int r;
    const float pi=3.14;
    printf("enter radius of circle: ");
    scanf("%d",&r);
    printf("Perimeter of a circle is %f",2*pi*(float)r);
}