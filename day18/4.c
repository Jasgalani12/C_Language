#include<stdio.h>
int main(){
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if (k%2==0)
            {
                printf("0");
            }
            else{
                printf("1");
            }
        }        
        printf("\n");
    }
}