#include<stdio.h>
int main(){
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);
    while(a>=1){
        if(a%2==1){
            printf("%d\n",a);
        }
        a--;
    }
}