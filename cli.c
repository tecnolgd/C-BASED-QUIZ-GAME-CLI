#include <stdio.h>
#include "head.h"
int displayMenu(int choice){
    printf("**\tQUIZZER RUSH**\t\n");
    printf("1. start quiz\n");
    printf("2. view rules\n");
    printf("3. exit\n");
    printf("enter choice:");
    scanf("%d",&choice);
    return choice;
}