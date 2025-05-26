#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#include "question_rank.c"
int back,choice;
 int displayMenu(int x);
void startQuiz();
void showRules();

void exitGame(){
    printf("well play. better next timebye\n");
}
int displayMenu(int x){
    printf("\t**QUIZZER RUSH**\t\n");
    printf("1. start quiz\n");
    printf("2. view rules\n");
    printf("3. exit\n");
    printf("enter choice:");
    scanf("%d",&choice);
    return choice;
}
int main(){
  
  
  int y;
 
    int x;
   
   do{
    choice=displayMenu(choice);
   
   }
   while(back==1);
    switch(choice){
        
        case 1:startQuiz();
                break;
            
        case 2: 
            showRules();
          break;
    
        
        case 3: printf("bye  bye\n");
                exit(0);
        default: printf("invalid choice .try again.");
       
                
        
    }
   
    
    printf("to retake quiz enter 2\nto quit,enter 0");
    scanf("%d",&y);
    if(y==2){
    startQuiz();
    }

    return 0;
}

void showRules(){
    
    

    printf("the rules for the game as follows:\n");
    printf("Number of Questions\nhe quiz consists of a fixed number of questions (e.g., 5 or 10), each with multiple choice answers (A, B, C, D)");
printf("Scoring\nEach correct answer awards 1 point.\nThere is no negative marking for wrong answers.");
printf("\nYour total score will be displayed at the end of the quiz\n");
printf("Answer\nFormat:\n");printf("You must input only the option letter (A, B, C, or D).\n");printf("Answers are case-insensitive (both a and A are valid).\n");printf("No Second Chances:\nOnce you answer a question, you cannot change your response.\nTime Limit (Optional Feature):\n");printf("If implemented, each question must be answered within a certain time limit.\nVictory Condition:\nA minimum score (e.g., 70 per or 4 out of 5) may be required to the game.\nBonus messages or rankings can be displayed based on performance.\nCheating Not Allowed\nThis quiz relies on your honesty. Dont peek at answers.cheating yourself is the biggest downfall .\nExit Option:\nYou can quit the quiz at any time by choosing the exit option in the menu.");

    

printf("\npress 1to go back to home page");
scanf("%d",&back);

}







    

        


