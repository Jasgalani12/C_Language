#include<stdio.h>
int main(){
    int i,a,j;
    printf("Enter value of a: ");
    scanf("%d",&a);
    for(j=1;j<=a;j++){
        for(i=1;i<=10;i++)
        {
            printf("%d*%d=%d\n",j,i,j*i);
        }
        printf("\n");
    }
}