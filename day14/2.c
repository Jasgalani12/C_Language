#include<stdio.h>
int main(){
    int x,sum=0,i;
    printf("Enter value of x: ");
    scanf("%d",&x);
    while(x!=0){
        i=x%10;
        sum=sum+i;
        x=x/10;
    }
    printf("%d",sum);
}