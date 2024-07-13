#include<stdio.h>
int main(){
    int ang1,ang2;
    printf("Enter First angle: ");
    scanf("%d",&ang1);
    printf("Enter Second angle: ");
    scanf("%d",&ang2);
    printf("Third angle: %d",180-(ang1+ang2));
    return 0;
}