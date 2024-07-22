#include<stdio.h>
int main(){
    int i=97;
    do{
        if(i%4==1){
            printf("%c  ",i);
        }
        i++;
    }while(i<=122);
    
}