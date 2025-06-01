#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "head.h"
#include "question_rank.c"
#include "cli.c"
#include "rules.c"

int back,choice;
int displayMenu();
void startQuiz();
void showRules();

void exitGame(){
    printf("Well play. Better next time.\n");
    printf("/home/\n");
}

int main(){
    do{

     
      choice= displayMenu();
      printf("Enter your choice:");
      scanf("%d",&choice);
      
      switch(choice){
          case 1: startQuiz();
                  break;
          case 2: showRules();
                  break;
          case 3: printf("well play.better next time.");
                  exit(0);
        default: printf("Invalid choice .try again");
       
      }
      printf("\nWanna try again??");
      printf("\n//home//");
      printf("\nPress 0 to exit ,other number to go to //home// page");
      scanf("%d",&back);
    }
    while(back!=0);
    printf("Well play. Better next time.\n");
    return 0;
}










    

        


