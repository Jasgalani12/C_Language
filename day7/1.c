#include<stdio.h>
int main(){
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    if(x==y){
        printf("Both values are equal");
    }
    else if(x<y){
        printf("The minimum value is:%d",x);
    }
    else{
        printf("The minimum value is:%d",y);
    }
}