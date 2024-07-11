#include<stdio.h>
int main(){
    float w1,n1,w2,n2;
    printf("enter weight and No. of item 1 simentouly:");
    scanf("%f %f",&w1,&n1);
    printf("enter weight and No. of item 2 simentouly:");
    scanf("%f %f",&w2,&n2);
    printf("Average value: %f",((w1*n1)+(w2*n2))/(n1+n2));
}