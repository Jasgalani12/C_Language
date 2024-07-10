#include<stdio.h>
int main(){
    int r;
    const float pi=3.14;
    printf("enter radius of circle: ");
    scanf("%d",&r);
    printf("area of a circle is %f",pi*(float)r*(float)r);
}