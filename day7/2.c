#include<stdio.h>
int main(){
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    if(x==0){
        printf("This number is Neutral");
    }
    else if(x<0){
        printf("This number is Negative");
    }
    else{
        printf("This number is Positive");
    }
    printf("\n-----------------------------------------------");
}