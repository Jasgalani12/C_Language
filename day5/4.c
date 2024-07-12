#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n\nAFTER SWAPPING!!\n\n");
    printf("A=%d \nB=%d",a,b);
}