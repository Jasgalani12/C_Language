#include<stdio.h>
int main(){
    int marks;
    char grade;
    printf("Enter marks: ");
    scanf("%d",&marks);
    (marks<=100 && marks>=90)?printf("Your grade is A"),grade='a':
    (marks<=89 && marks>=70)?printf("Your grade is B"),grade='b':
    (marks<=69 && marks>=50)?printf("Your grade is C"),grade='c':
    (marks<=49 && marks>=40)?printf("Your grade is D"),grade='d':
    (marks<=39 && marks>=25)?printf("Your grade is E"),grade='e':
    (marks<=24 && marks>=0)?printf("Your grade is F"),grade='f':
    printf("Please Enter marks between 0 to 100 ......!!");
    switch (grade)
    {
    case 'a':
        printf("\nExcellent work!.");
        break;
    case 'b':
        printf("\nWell done.");
        break;
    case 'c':
        printf("\nGood Job.");
        break;
    case 'd':
        printf("\nYou passed, but you could do better.");
        break;
    case 'e':
        printf("\nYou passed, but you have to improve.");
        break;
    case 'f':
        printf("Sorry, you failed.");
        break;
    default:
        break;
    }
    if(grade=='a'||grade=='b'||grade=='c'||grade=='d'||grade=='e'){
        printf("\nYou are eligible for the next level.");
    }
    else if(grade=='f'){
        printf("\nPlease try again next time.:(");
    }
    else{

    }
}