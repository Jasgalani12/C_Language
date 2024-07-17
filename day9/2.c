#include<stdio.h>
int main(){
    int lang,type;
    printf("Press 1 for English\n");
    printf("Hindi ke liye 2 dabaiye\n");
    printf("Gujarati mate 3 dabavo\n");
    printf("Enter your choice:");
    scanf("%d",&lang);
    switch (lang)
    {
    case 1:
        printf("\tPress 1 for Internet Recharge\n");
        printf("\tPress 2 for Top-up Recharge\n");
        printf("\tPress 3 for Special Recharge\n");
        printf("Enter your choice:");
        scanf("%d",&type);
        switch (type)
        {
        case 1:
            printf("\t\tYou have successfully done a Internet Recharge");
            break;
        case 2:
            printf("\t\tYou have successfully done a Top-up Recharge");
            break;
        case 3:
            printf("\t\tYou have successfully done a Special Recharge");
            break;
        default:
            printf("\n\n\t\tinvalid choice");
            break;
        }
        break;
    case 2:
        printf("\tInternet Recharge ke liye 1 dabaiye\n");
        printf("\tTop-up Recharge ke liye 2 dabaiye\n");
        printf("\tSpecial Recharge ke liye 3 dabaiye\n");
        printf("Enter your choice:");
        scanf("%d",&type);
        switch (type)
        {
        case 1:
            printf("\t\tAapne safaltapurvak Internet Recharge kar liya he");
            break;
        case 2:
            printf("\t\tAapne safaltapurvak Top-up Recharge kar liya he");
            break;
        case 3:
            printf("\t\tAapne safaltapurvak Special Recharge kar liya he");
            break;
        default:
            printf("\n\n\t\tinvalid choice");
            break;
        }
        break;
    case 3:
        printf("\tInternet Recharge mate 1 dabavo\n");
        printf("\tTop-up Recharge mate 2 dabavo\n");
        printf("\tSpecial Recharge mate 3 dabavo\n");
        printf("Enter your choice:");
        scanf("%d",&type);
        switch (type)
        {
        case 1:
            printf("\t\tTame safaltapurvak Internet Recharge karyu chhe");
            break;
        case 2:
            printf("\t\tTame safaltapurvak Top-up Recharge karyu chhe");
            break;
        case 3:
            printf("\t\tTame safaltapurvak Special Recharge karyu chhe");
            break;
        default:
            printf("\n\n\t\tinvalid choice");
            break;
        }
        break;
    
    default:
        printf("\n\n\t\tinvalid choice");
        break;
    }
}