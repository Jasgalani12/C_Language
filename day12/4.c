#include<stdio.h>
int main(){
    int f=1,s=-1,sum,i;
    for(i=1;i<=10;i++){
        sum=f+s;
        printf("%d\n",sum);
        s=f;
        f=sum;
    }
}