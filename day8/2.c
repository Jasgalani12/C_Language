#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);
    printf("Enter value of d: ");
    scanf("%d",&d);
    if(a==b&&a==c&&a==d){
        printf("ALL VALUE ARE EQUAL....!!");
    }
    else{
        if(a>b){
        if(a>c){
            if(a>d){
                printf("The maximum value is:%d",a);
            }
            else{
                printf("The maximum value is:%d",d);
            }
        }
        else{
            if(c>d){
                printf("The maximum value is:%d",c);
            }
            else{
                printf("The maximum value is:%d",d);
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                printf("The maximum value is:%d",b);
            }
            else{
                printf("The maximum value is:%d",d);
            }
        }
        else{
            if(c>d){
                printf("The maximum value is:%d",c);
            }
            else{
                printf("The maximum value is:%d",d);
            }
        }
    }
    }
}