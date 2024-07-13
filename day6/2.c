#include<stdio.h>
int main(){
    int salary,hra,da,ta;
    printf("Enter Base salary: ");
    scanf("%d",&salary);
    printf("Enter HRA: ");
    scanf("%d",&hra);
    printf("Enter DA: ");
    scanf("%d",&da);
    printf("Enter TA: ");
    scanf("%d",&ta);
    printf("Gross Salary: Rs.%d",salary+((salary*hra)/100)+((salary*da)/100)+((salary*ta)/100));
    return 0;
}