#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter value of C: ");
    scanf("%d",&x);
    printf("Enter value of CF: ");
    scanf("%d",&y);
    printf("Enter value of COA: ");
    scanf("%d",&z);
    printf("Average mark:%f",((float)x+(float)y+(float)z)/3);
}