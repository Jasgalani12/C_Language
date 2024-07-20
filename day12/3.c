#include<stdio.h>
int main(){
    int a=1,b;
    printf("Enter value of b: ");
    scanf("%d",&b);
    do{
        if(a%2==0){
            printf("%d\n",a);
        }
        a++;
    }while (a<=b);
}