#include<stdio.h>
int main(){
    int i,a;
    printf("Enter value of a: ");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        printf("%d X %d=%d\n",a,i,a*i);
    }
}