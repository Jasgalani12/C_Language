#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=i;k>=2;k--)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++)
        {
            if (j%2==0){
                printf("0");
            }
            else{
                printf("1");
            } 
        }
        printf("\n");
    }
}