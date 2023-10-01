#include<stdio.h>

int main()
{
    float BS,TSM,C,NS;

    printf("Enter basic salary: \n");
    scanf("%f", &BS);

    if(BS >= 5000 || BS <= 7500) {
        printf("Net salary: %0.2f\n",(BS+(BS*0.03)));
        printf("Commission earned %.2f\n", BS*0.03);
    }

    else if(BS >= 7501 || BS <= 10500) {
        printf("Net salary: %0.2f\n",(BS+(BS*0.08)));
        printf("Commission earned: %.2f\n", BS*0.08);
    }

    else if(BS >= 10501 || BS <= 15000) {
        printf("Net salary: %0.2f\n",(BS+(BS*0.11)));
        printf("Commission earned %.2f\n", BS*0.11);
    } 

    else if(BS >= 15001) {
        printf("Net salary: %0.2f\n",(BS+(BS*0.15)));
        printf("Commission earned %.2f\n", BS*0.15);
    }


    return 0;
}
