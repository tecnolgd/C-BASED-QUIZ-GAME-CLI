//QUIZZER RUSH-A console menu-based game ,with pure logic of looping statements ,conditions and array logic.
//Includes conceps of modularisation and linkers in a simple C program.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "head.h"//header file
#include "question_rank.c"//question logic file
#include "cli.c" //menu/home page file
#include "rules.c"//rule set file

int back,choice;
int displayMenu();
void startQuiz();
void showRules();

void exitGame(){
    printf("Well play. Better next time.\n");
    printf("/home/\n");
}

int main(){
    do{ //loop for continuos menu display

     
      choice= displayMenu();
      printf("Enter your choice:");
      scanf("%d",&choice);
      
      switch(choice){ //switch statement for menu choice 
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
    while(back!=0); //condition to check whether user wants to continue the game or not
    printf("Well play. Better next time.\n");
    return 0;
}










    

        


