#include<stdio.h>
int main(){
    int i,j,k,l;
    for(i=5;i>=1;i--)
    {
        for (k=i;k>=2;k--)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++){
            printf("%d",j);
        }
        for(l=5;l>=i;l--){
            if(l==5){
                continue;
            }
            else{
                printf("%d",l);
            }
        }
        printf("\n");
    }
}