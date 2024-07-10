#include<stdio.h>
int main(){
    float p,r,n;
    printf("enetr price: ");
    scanf("%f",&p);
    printf("enetr rate of interest: ");
    scanf("%f",&r);
    printf("enetr time period: ");
    scanf("%f",&n);
    printf("simple interest is %f",(p*r*n)/100);
}