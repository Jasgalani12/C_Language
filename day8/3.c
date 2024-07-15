#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);
    printf("Enter value of d: ");
    scanf("%d",&d);
    printf("Enter value of e: ");
    scanf("%d",&e);
    if(a==b&&a==c&&a==d&&a==e){
        printf("ALL VALUE ARE EQUAL....!!");
    }
    else{
        if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    printf("The maximum value is:%d",a);
                }
                else{
                    printf("The maximum value is:%d",e);
                }
            }
            else{
                if(d>e){
                    printf("The maximum value is:%d",d);
                }
                else{
                    printf("The maximum value is:%d",e);
                }
            }
        }
        else{
            if(c>d){
                if(c>e){
                    printf("The maximum value is:%d",c);
                }
                else{
                    printf("The maximum value is:%d",e);
                }
            }
            else{
                if(d>e){
                    printf("The maximum value is:%d",d);
                }
                else{
                    printf("The maximum value is:%d",e);
                }
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                if(b>e){
                    printf("The maximum value is:%d",b);
                }
                else{
                    printf("The maximum value is:%d",e);
                }
            }
            else{
                if(d>e){
                    printf("The maximum value is:%d",d);
                }
                else{
                    printf("The maximum value is:%d",e);
                }
            }
        }
        else{
            if(c>d){
                if(c>e){
                    printf("The maximum value is:%d",c);
                }
                else{
                    printf("The maximum value is:%d",e);
                }
            }
            else{
                if(d>e){
                    printf("The maximum value is:%d",d);
                }
                else{
                    printf("The maximum value is:%d",e);
                }
            }
        }
    }
    }
}