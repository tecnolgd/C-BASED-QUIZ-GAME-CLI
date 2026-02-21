//QUIZZER RUSH-A console menu-based game ,with pure logic of looping statements ,conditions and array logic.
//Includes conceps of modularisation and linkers in a simple C program.

#include "head.h"//header file

int back,choice;  //Global variable definitions

int displayMenu();

int main(){
    do{ //loop for continuos menu display
        choice = displayMenu();
        printf("Enter your choice:");
        scanf("%d",&choice);
      
        switch(choice){ //switch statement for menu choice 
          case 1: startQuiz();
                  break;
          case 2: showRules();
                  break;
          case 3: printf("Well played. Better next time.");
                  exit(0);
        default: printf("Invalid choice. Try again");
        }

        printf("\nWanna try again?? ");
        printf("\n//home//");
        printf("\nPress 0 to exit ,1 to go to //home// page\t");
        scanf("%d",&back);
    }
    while(back!=0); //condition to check whether user wants to continue the game or not
    printf("Well played. Better next time.\n");
    return 0;
}

