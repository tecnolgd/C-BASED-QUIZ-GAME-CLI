#include <stdio.h>
#include "head.h"
#include "cli.c"
#include "question_rank.c"
#include "rules.c"



void exitGame(){
    printf("well play better next timebye\n");
}
int main(){
    int choice;
    int key;
   do{
    choice=displayMenu();

    switch(choice){
        case 1: startQuiz();
                break;
        case 2: showRules();
                break;
        case 3: exitGame();
                break;
        default: printf("invalid choice.try again.");
        key=0;
    }
}
        while(key=0);
}
