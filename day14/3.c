#include<stdio.h>
int main(){
    int x,sum=0,i=0,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    y=x;
    sum=y%10;
    while(x!=0){
        y=x%10;
        i=i*10+y;
        x=x/10;
    }
    printf("\n%d",sum+(i%10));
}